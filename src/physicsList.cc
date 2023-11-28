#include "physicsList.hh"
#include "G4SystemOfUnits.hh"
#include "G4UnitsTable.hh"

#include "G4HadronPhysicsFTFP_BERT_HP.hh"
#include "G4HadronPhysicsQGSP_BIC_HP.hh"
#include "G4HadronInelasticQBBC.hh"
#include "G4HadronPhysicsINCLXX.hh"
#include "G4IonPhysics.hh"
#include "G4IonINCLXXPhysics.hh"
#include "G4StoppingPhysics.hh"
#include "ElectromagneticPhysics.hh"
#include "G4DecayPhysics.hh"
#include "G4RadioactiveDecayPhysics.hh"
#include "ElectromagneticPhysics.hh"

#include "HadronElasticPhysicsHP.hh"


MyPhysicsList::MyPhysicsList()
{



  // EM physics
  RegisterPhysics(new ElectromagneticPhysics());
  ////RegisterPhysics(new G4EmStandardPhysics());
  
  // Decay
  RegisterPhysics(new G4DecayPhysics());

  // Radioactive decay
  RegisterPhysics(new G4RadioactiveDecayPhysics());

}
MyPhysicsList::~MyPhysicsList()
{ }
