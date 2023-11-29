#include <iostream>

#include "G4RunManager.hh"
#include "G4UImanager.hh"
#include "G4UIExecutive.hh"
#include "G4VisExecutive.hh"

#include "DetectorConstruction.hh"

#include "ActionInitialization.hh"
//#include "MyRunAction.hh"

//#include "Randomize.hh"
//#include "time.h"

#include "physicsList.hh"
#include "FTFP_BERT.hh"
#include "FTFP_BERT_HP.hh"
#include "QBBC.hh"
#include "QGSP_BIC_HP.hh"

int main(int argc, char** argv)
{
    G4RunManager *runManager = new G4RunManager;
    runManager->SetUserInitialization(new DetectorConstruction);
   // #define COMPILATION_SWITCH argv[1]
   // #ifdef COMPILATION_SWITCH == "neutronPhysicsList"
    //#include "PhysicsList.hh"
    //runManager->SetUserInitialization(new MyPhysicsList());
    runManager->SetUserInitialization(new QGSP_BIC_HP);
    runManager->SetUserInitialization(new MyActionInitialization());

    runManager->Initialize();

    G4UIExecutive *uiExecutive = new G4UIExecutive(argc, argv);
    G4VisManager *visManager = new G4VisExecutive;
    visManager->Initialize();
    G4UImanager *uiManager = G4UImanager::GetUIpointer();
    uiManager->ApplyCommand("/control/execute vis.mac");

    uiExecutive->SessionStart();



/*


#define COMPILATION_SWITCH argv[1]

	runManager->SetUserInitialization(new PhysicsList());

#elif COMPILATION_SWITCH == "FTFP_BERT"
//#include "FTFP_BERT.hh"
	runManager->SetUserInitialization(new FTFP_BERT);

#elif COMPILATION_SWITCH == "FTFP_BERT_HP"
//#include "FTFP_BERT_HP.hh"
	runManager->SetUserInitialization(new FTFP_BERT_HP);

#elif COMPILATION_SWITCH == "QBBC"
//#include "QBBC.hh"
	runManager->SetUserInitialization(new QBBC);

#elif COMPILATION_SWITCH == "QGSP_BIC_HP"
//#include "QGSP_BIC_HP.hh"
	runManager->SetUserInitialization(new QGSP_BIC_HP);
#endif

	MyPrimaryGeneratorAction *myGeneratorAction =
			new MyPrimaryGeneratorAction(myDetectorConstruction->GetHalfLabSize());
	runManager->SetUserAction(myGeneratorAction);

	MyRunAction *myRunAction = new MyRunAction(myDetectorConstruction,
												myGeneratorAction,
												COMPILATION_SWITCH);
	runManager->SetUserAction(myRunAction);

	

	

	uiManager->ApplyCommand("/control/execute vis-init.macro");
//	uiManager->ApplyCommand("/vis/set/textColour cyan");
//	uiManager->ApplyCommand("/vis/scene/add/text2D -0.9 0.7 12 ! ! gun particle: "
//			+ myGeneratorAction->GetLabelParticleGunName());
//	G4String gunEnergy = myGeneratorAction->GetLabelParticleGunEnergy();
//	uiManager->ApplyCommand("/vis/scene/add/text2D -0.9 0.6 12 ! ! gun energy: "
//			+ gunEnergy);
//	G4String physicsList = COMPILATION_SWITCH;
//	uiManager->ApplyCommand("/vis/scene/add/text2D -0.9 0.5 12 ! ! physics list: "
//			+ physicsList);
	uiExecutive->SessionStart();

	delete uiExecutive;
	delete visManager;
    delete runManager;
*/
	return 0;
}
