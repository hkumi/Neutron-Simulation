#ifndef GENERATOR_HH
#define GENERATOR_HH

#include "G4VUserPrimaryGeneratorAction.hh"

#include "G4ParticleGun.hh"
#include "G4SystemOfUnits.hh"
#include "G4ParticleTable.hh"
#include "G4IonTable.hh"
#include "G4ChargedGeantino.hh"
#include "Randomize.hh"

class G4ParticleGun;
class G4ParticleDefinition;
class G4Event;

class MyPrimaryGenerator : public G4VUserPrimaryGeneratorAction
{
public:
    MyPrimaryGenerator();
    ~MyPrimaryGenerator();

    virtual void GeneratePrimaries(G4Event*);
public: 

      G4String GetLabelParticleGunName() const { return labelParticleGunName; }
	void SetLabelParticleGunName(const G4String& labelParticleGunName) {
		this->labelParticleGunName = labelParticleGunName;
	}

	G4double GetLabelParticleGunEnergy() const { return gunEnergy; }
	void SetLabelParticleGunEnergy(G4double gunEnergy) {
		this->gunEnergy = gunEnergy;
	}

private:
    G4ParticleGun *fParticleGun;
    G4ParticleDefinition *neutron{nullptr}, *antiNeutron{nullptr};
    G4double gunEnergy;
    G4ThreeVector gunPosition, halfLabSize;
    G4String labelParticleGunName;
};

#endif
