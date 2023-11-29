#include "DetectorConstruction.hh"
#include "MyDetectorMessenger.hh"

#include "G4VPhysicalVolume.hh"
#include "G4LogicalVolume.hh"
#include "G4PVPlacement.hh"
#include "G4Box.hh"
#include "G4Trd.hh"
#include "G4Tubs.hh"

#include "G4NistManager.hh"
#include "G4VisAttributes.hh"
#include "G4RunManager.hh"
#include "G4RotationMatrix.hh"

DetectorConstruction::DetectorConstruction()
:
G4VUserDetectorConstruction(),
halfLabSize(G4ThreeVector(0.5*m, 0.5*m, 0.5*m))
{
	myDetectorMessenger = new MyDetectorMessenger(this);
	SetActiveRotationAxisAngle(G4ThreeVector(0, 1, 0), 5*deg);
}

DetectorConstruction::~DetectorConstruction()
{

	delete myDetectorMessenger;
}

G4VPhysicalVolume* DetectorConstruction::Construct()
{
	DefineMaterials();
	return ConstructDetector();
}

void DetectorConstruction::DefineMaterials()
{
	G4int ncomponents, natoms;
        G4double massfraction;

        G4double Vdens = 1.e-25*g/cm3;
        G4double Vpres = 1.e-19*pascal;
        G4double Vtemp = 0.1*kelvin;
  
        

        G4NistManager *nist = G4NistManager::Instance();
	G4Material *vacuum = nist->FindOrBuildMaterial("G4_Galactic");
	G4Material *air = nist->FindOrBuildMaterial("G4_AIR");
	G4Material *G4H2Oliquid = nist->FindOrBuildMaterial("G4_WATER");

	G4String name, symbol;
	G4double abundance, density, temperature, pressure;
	G4double a; 					// mass of a mole
	G4double z; 					// atomic number (number of protons);
	G4int components, nucleons, numberOfIsotopes, numberOfAtoms, fractionmass;


	

	// pressurized water
	G4Element *H  = new G4Element("Hydrogen","H", z=1, a=1.0079*g/mole);
	G4Element *O  = new G4Element("Oxygen","O", z=8, a=16.00*g/mole);
	G4Material *H2Opressurised = new G4Material("pressurised water",
									density=1.000*g/cm3,
									components=2,
									kStateLiquid,
									temperature=593*kelvin,
									pressure=150*bar);
	H2Opressurised->AddElement(H, numberOfAtoms=2);
	H2Opressurised->AddElement(O, numberOfAtoms=1);
	H2Opressurised->GetIonisation()->SetMeanExcitationEnergy(78.0*eV);

	// heavy water
	G4Isotope* Deuteron = new G4Isotope("Deuteron", z=1, nucleons=2);
	G4Element* Deuterium  = new G4Element("Deuterium", "Deuterium", numberOfIsotopes=1);
	Deuterium->AddIsotope(Deuteron, 100*perCent);
	G4Material* D2O = new G4Material("heavy water",
									density=1.11*g/cm3,
									components=2,
									kStateLiquid,
									temperature=293.15*kelvin,
									pressure=1*atmosphere);
	D2O->AddElement(Deuterium, numberOfAtoms=2);
	D2O->AddElement(O, numberOfAtoms=1);

	 // graphite
        G4Isotope* C12 = new G4Isotope("C12", 6, 12);  
        G4Element* C   = new G4Element("TS_C_of_Graphite","C", ncomponents=1);
        C->AddIsotope(C12, 100.*perCent);
        G4Material* graphite = 
        new G4Material("graphite", 2.27*g/cm3, ncomponents=1,
                         kStateSolid, 293*kelvin, 1*atmosphere);
        graphite->AddElement(C, natoms=1);

        // air
        G4Element* N = new G4Element("Nitrogen", "N", 7., 14.01*g/mole);
        G4Material* Air = new G4Material("air", 1.290*mg/cm3, ncomponents=2, kStateGas, 293*kelvin, 1*atmosphere);
        Air->AddElement(N, massfraction=70.*perCent);
        Air->AddElement(O, massfraction=30.*perCent);

        // iron
        G4Isotope* Fe56 = new G4Isotope("Fe56", 26, 56);
        G4Element* Fe = new G4Element("TS_Iron_Metal", "Fe", ncomponents=1);
        Fe->AddIsotope(Fe56, 100.*perCent);
        G4Material* iron = new G4Material("iron", 7.874*g/cm3, ncomponents=1, kStateSolid, 293*kelvin, 1*atmosphere);
        iron->AddElement(Fe, natoms=1);

        // boron
        G4Isotope* B10 = new G4Isotope("B10", 5, 10);
        G4Isotope* B11 = new G4Isotope("B11", 5, 11);
        G4Element* B = new G4Element("Boron", "B", ncomponents=2);
        B->AddIsotope(B10, 19.9*perCent);
        B->AddIsotope(B11, 80.1*perCent);
        G4Material* boron = new G4Material("boron", 2.46*g/cm3, ncomponents=1, kStateSolid,293*kelvin, 1*atmosphere);
        boron->AddElement(B, natoms=1);

        // polyethilene
        G4Element* Hpe = new G4Element("TS_H_of_Polyethylene", "H", 1, 1.0079*g/mole);
        G4Element* Cpe = new G4Element("Carbon", "C", 6, 12.01*g/mole);
        G4Material* polyethylene = new G4Material("polyethylene", 0.93*g/cm3, ncomponents=2, kStateSolid, 293*kelvin, 1*atmosphere);
        polyethylene->AddElement(Hpe, natoms=4);
        polyethylene->AddElement(Cpe, natoms=2);

        // borated polyethilene
        G4Material* b_polyethylene = new G4Material("b_polyethylene",0.94*g/cm3,ncomponents=4,kStateSolid,293*kelvin,1*atmosphere);
        b_polyethylene->AddElement(Hpe, 11.6*perCent);
        b_polyethylene->AddElement(Cpe, 61.2*perCent);
        b_polyethylene->AddElement(B, 5*perCent);
        b_polyethylene->AddElement(O, 22.2*perCent);
//	Prevent changing materials to default values if they were adjusted at run time:
	if (labMaterial == nullptr)
		labMaterial = vacuum;

	if (targetMaterial == nullptr)
		targetMaterial = polyethylene;

	if (shieldMaterial == nullptr)

		shieldMaterial = D2O; // i.e. Heavy Water
//		shieldMaterial = G4Concrete;
}

G4VPhysicalVolume* DetectorConstruction::ConstructDetector()
{
	G4bool checkOverlaps = true;
	G4double opacity = 0.4;

	G4VisAttributes* invisible = new G4VisAttributes(G4Colour(1, 1, 1));
	invisible->SetVisibility(false);

	G4VisAttributes *orange = new G4VisAttributes(G4Colour(1, 0.65, 0, opacity));
	orange->SetVisibility(true);
	orange->SetForceWireframe(true); // Whichever is last overwrites the previous one!
	orange->SetForceSolid(true);     // Whichever is last overwrites the previous one!

	G4VisAttributes *yellow = new G4VisAttributes(G4Colour(1, 1, 0, opacity));
	yellow->SetVisibility(true);
	yellow->SetForceSolid(true);

	G4VisAttributes *brown = new G4VisAttributes(G4Colour(0.71, 0.4, 0.11, opacity));
	brown->SetVisibility(true);
	brown->SetForceSolid(true);

	G4VisAttributes *green = new G4VisAttributes(G4Colour(0, 1, 0, opacity));
	green->SetVisibility(true);
	green->SetForceSolid(true);


	solidLab = new G4Box("Lab",          // name
						halfLabSize.x(), halfLabSize.y(), halfLabSize.z());

	logicalLab = new G4LogicalVolume(solidLab,
									labMaterial,
									"Lab");      //name

	physicalLab = new G4PVPlacement(nullptr,   		 //no rotation
									G4ThreeVector(), //at (0,0,0)
									logicalLab,      //its logical volume
									"Lab",           //its name
									nullptr,       	 //its mother volume
									false,           //no boolean operation
									0);              //copy number

//	logicalLab->SetVisAttributes(invisible);

	G4double halfLengthX1 = 13*cm, halfLengthX2 = 7*cm;
	G4double halfLengthY1 = 8*cm, halfLengthY2 = 14*cm;
	G4double halfLengthZ = 5*cm;
	solidTarget = new G4Trd("Target",
								halfLengthX1, halfLengthX2,
								halfLengthY1, halfLengthY2,
								halfLengthZ);

	logicalTarget = new G4LogicalVolume(solidTarget,
									   targetMaterial,
									   "Target");

	G4RotationMatrix *rotationAxisAngle = new G4RotationMatrix(rotationAxis, rotationAngle);
	new G4PVPlacement(rotationAxisAngle,		// rotation
	                  G4ThreeVector(0, 0, 15*cm), 	// at (x,y,z)
					  logicalTarget,			// logical volume
	                  "Target",     			// name
	                  logicalLab, 		     	// logical mother volume
	                  false,           			// no boolean operations
	                  0,               			// copy number
	                  checkOverlaps); 			// checking overlaps

	logicalTarget->SetVisAttributes(yellow);

	if (shieldOn)
	{
		G4double innerRadius = 0, outerRadius = 12*cm;
		G4double angleMin = 0, angleMax = 360*deg;
		solidShield = new G4Tubs("Shield",
								innerRadius, outerRadius,
								shieldThickness,
								angleMin, angleMax);

		logicalShield = new G4LogicalVolume(solidShield,
											 shieldMaterial,
											 "Shield",
											 0, 0, 0);

		new G4PVPlacement(nullptr,				        // no rotation
						  G4ThreeVector(0, 0, -11*cm), 	// at (x,y,z)
						  logicalShield,				// its logical volume
						  "Shield",	      			// its name
						  logicalLab, 		    		// logical mother volume
						  false,           				// no boolean operations
						  0,               				// copy number
						  checkOverlaps); 				// checking overlaps

		logicalShield->SetVisAttributes(brown);
	} 

       /////............................DEFINE SENSITIVE DETECTOR TO DETECT THE NEUTRONS.................
        G4NistManager *nist = G4NistManager::Instance();
        G4Material *air = nist->FindOrBuildMaterial("G4_AIR");
        G4Box *solidDetector = new G4Box("solidDetector",0.005*m,0.005*m,0.01*m);
        logicDetector = new G4LogicalVolume(solidDetector,air,"logicDetector");
        for(G4int i = 0; i<100;i++)
        {
           for(G4int j = 0; j<100;j++)
           {
              G4VPhysicalVolume *physDetector = new G4PVPlacement(0,G4ThreeVector(-0.5*m+(i+0.5)*m/100,-0.5*m+(j+0.5)*m/100,0.49*m),logicDetector,"physDetector", logicalLab,false,j+i*100,true);
           }
        } 

       ///..............................END OF SENSITIVE DETECTOR.......................................

	return physicalLab;
}

///........................FUNCTION TO ADD THE DETECTOR TO THE SENSITIVE DETECTOR...................

void DetectorConstruction::ConstructSDandField()
{
    MySensitiveDetector *sensDet = new MySensitiveDetector("SensitiveDetector");

    logicDetector->SetSensitiveDetector(sensDet);

}
//..........................END OF FUNCTION...............................................

void DetectorConstruction::SetLabMaterial(const G4String& labMaterial)
{
	G4Material *ptrToMaterial = G4NistManager::Instance()->FindOrBuildMaterial(labMaterial);
	if (ptrToMaterial)
	{
		this->labMaterial = ptrToMaterial;
		if (logicalLab)
		{
			logicalLab->SetMaterial(this->labMaterial);
			G4RunManager::GetRunManager()->PhysicsHasBeenModified();
			G4cout << "Lab material changed to: " << GetLabMaterial() << G4endl;
		}
	}
	else
	{
		G4cerr << "Material not found" << G4endl;

	}
}

void DetectorConstruction::SetTargetMaterial(const G4String& targetMaterial)
{
	G4Material *ptrToMaterial = G4NistManager::Instance()->FindOrBuildMaterial(targetMaterial);
	if (ptrToMaterial)
	{
		this->targetMaterial = ptrToMaterial;
		if (logicalTarget)
		{
			logicalTarget->SetMaterial(this->targetMaterial);
			G4RunManager::GetRunManager()->PhysicsHasBeenModified();
			G4cout << "Target material changed to: " << GetTargetMaterial() << G4endl;
		}
	}
	else
	{
		G4cerr << "Material not found" << G4endl;
	}
}

void DetectorConstruction::SetShieldMaterial(const G4String& shieldMaterial)
{
	G4Material *ptrToMaterial = G4NistManager::Instance()->FindOrBuildMaterial(shieldMaterial);
	if (ptrToMaterial)
	{
		this->shieldMaterial = ptrToMaterial;
		if (logicalShield)
		{
			logicalShield->SetMaterial(this->shieldMaterial);
			G4RunManager::GetRunManager()->PhysicsHasBeenModified();
			G4cout << "Shield material changed to: " << GetShieldMaterial() << G4endl;
		}
	}
	else
	{
		G4cerr << "Material not found" << G4endl;
	}
}

void DetectorConstruction::SetShieldOn(G4bool shieldOn)
{
	this->shieldOn = shieldOn;
	G4RunManager::GetRunManager()->ReinitializeGeometry();
}

void DetectorConstruction::SetShieldThickness(G4double shieldThickness)
{
	this->shieldThickness = shieldThickness;
	G4RunManager::GetRunManager()->ReinitializeGeometry();
}

void DetectorConstruction::SetActiveRotationAxisAngle(G4ThreeVector rotationAxis, G4double rotationAngle)
{
	// Force this to be an active rather than a passive rotation
	this->rotationAxis = -rotationAxis;
	this->rotationAngle = rotationAngle;
//  Rotation effective immediately; removes beam:
//	G4RunManager::GetRunManager()->DefineWorldVolume(Construct());
//  Rotation takes effect upon: /run/beamOn
	G4RunManager::GetRunManager()->ReinitializeGeometry();
}

