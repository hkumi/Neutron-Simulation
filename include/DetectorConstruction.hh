#ifndef DETECTORCONSTRUCTION_HH
#define DETECTORCONSTRUCTION_HH
#include "G4VUserDetectorConstruction.hh"

#include "G4SystemOfUnits.hh"
#include "G4LogicalVolume.hh"
#include "G4VPhysicalVolume.hh"
#include "G4Box.hh"
#include "G4PVPlacement.hh"
#include "G4NistManager.hh"
class MyDetectorMessenger;
class G4LogicalVolume;
class G4VPhysicalVolume;
#include "G4Material.hh"
class G4Box;
class G4Trd;
class G4Tubs;

class DetectorConstruction: public G4VUserDetectorConstruction
{

public:

      
	DetectorConstruction();
	virtual ~DetectorConstruction();
	virtual G4VPhysicalVolume* Construct();

	G4ThreeVector GetHalfLabSize() const { return halfLabSize; }

	G4String GetLabMaterial() { return labMaterial->GetName(); }
	void SetLabMaterial(const G4String&  labMaterial);

	G4String GetTargetMaterial() { return targetMaterial->GetName(); }
	void SetTargetMaterial(const G4String& targetMaterial);

	G4String GetShieldMaterial() { return shieldMaterial->GetName(); }
	void SetShieldMaterial(const G4String& shieldMaterial);

	G4double GetShieldThickness() const { return shieldThickness; }
	void SetShieldThickness(G4double shieldThickness);

	G4bool GetShieldOn() const { return shieldOn; }
	void SetShieldOn(G4bool shieldOn);

	void SetActiveRotationAxisAngle(G4ThreeVector rotationAxis, G4double rotationAngle);
	G4ThreeVector GetRotationAxis() const { return rotationAxis; }
	G4double GetRotationAngle() const { return rotationAngle; }

private:
	MyDetectorMessenger *myDetectorMessenger{nullptr};
	G4ThreeVector rotationAxis;
	G4double rotationAngle;
	G4ThreeVector halfLabSize;

	G4Box *solidLab{nullptr};
	G4Trd *solidTarget{nullptr};
	G4Tubs *solidShield{nullptr};

	G4LogicalVolume *logicalLab{nullptr};
	G4LogicalVolume *logicalTarget{nullptr};
	G4LogicalVolume *logicalShield{nullptr};

	G4VPhysicalVolume *physicalLab{nullptr};

	G4Material *labMaterial{nullptr};
	G4Material *targetMaterial{nullptr};
	G4Material *shieldMaterial{nullptr};

	G4bool shieldOn{false};
	G4double shieldThickness{6*cm};

	void DefineMaterials();
	G4VPhysicalVolume* ConstructDetector();

};

#endif
