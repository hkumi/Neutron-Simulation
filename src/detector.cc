#include "detector.hh"


MySensitiveDetector::MySensitiveDetector(G4String name) : G4VSensitiveDetector(name)
{

}

MySensitiveDetector::~MySensitiveDetector()
{}

G4bool MySensitiveDetector::ProcessHits(G4Step *aStep, G4TouchableHistory *ROhist)
{

    G4Track *track = aStep->GetTrack();

    //track->SetTrackStatus(fStopAndKill);

    G4StepPoint *preStepPoint = aStep->GetPreStepPoint();//used when the neutron enters the detector
    G4StepPoint *postStepPoint = aStep->GetPostStepPoint();//used when the neutron leaves the detector

    G4ThreeVector posNeutron = preStepPoint->GetPosition();//accessing the position
    G4double energy = preStepPoint->GetTotalEnergy();      //get the energy from the particle
    //G4String energyString = G4BestUnit(energy, "Energy"); // Assuming you want the energy in the best unit for energy

    const G4VTouchable *touchable = aStep->GetPreStepPoint()->GetTouchable();

    G4int copyNo = touchable->GetCopyNumber();

    //G4cout << "Copy number: " << copyNo << G4endl;

    G4VPhysicalVolume *physVol = touchable->GetVolume();
    G4ThreeVector posDetector = physVol->GetTranslation();

    G4cout<< "Neutron Position:"<< posDetector << G4endl;
    G4cout<<"Total Energy: " << energy << G4endl;

    G4int evt = G4RunManager::GetRunManager()->GetCurrentEvent()->GetEventID();

    G4AnalysisManager *man = G4AnalysisManager::Instance();
    man->FillNtupleIColumn(0, 0, evt);
    man->FillNtupleDColumn(0, 1, posDetector[0]);
    man->FillNtupleDColumn(0, 2, posDetector[1]);
    man->FillNtupleDColumn(0, 3, posDetector[2]);
    man->AddNtupleRow(0);

 
    //G4ThreeVector momNeutron = preStepPoint->GetMomentum();
   /*
    G4double time = preStepPoint->GetGlobalTime();

    G4double wlen = (1.239841939*eV/momPhoton.mag())*1E+03;


    #ifndef G4MULTITHREADED
        //G4cout << "Detector position: " << posDetector << G4endl;
        //G4cout << "Photon wavelength: " << wlen << G4endl;
    #endif*/

 return true;
}
