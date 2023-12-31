#include <iostream>

#include "G4RunManager.hh"
#include "G4UImanager.hh"
#include "G4UIExecutive.hh"
#include "G4VisExecutive.hh"
#include "G4MTRunManager.hh"
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
   /*
    #ifdef G4MULTITHREADED
      G4MTRunManager* runManager = new G4MTRunManager;
    #else*/
      G4RunManager* runManager = new G4RunManager;
    //#endif
    G4UImanager *uiManager = G4UImanager::GetUIpointer();
    runManager->SetUserInitialization(new DetectorConstruction);
   // #define COMPILATION_SWITCH argv[1]
   // #ifdef COMPILATION_SWITCH == "neutronPhysicsList"
    //#include "PhysicsList.hh"
    //runManager->SetUserInitialization(new MyPhysicsList());
    runManager->SetUserInitialization(new QGSP_BIC_HP);
    runManager->SetUserInitialization(new MyActionInitialization());

    //runManager->Initialize();

     G4UIExecutive* uiExecutive = 0;
     if (argc == 1)
     { 
         uiExecutive = new G4UIExecutive(argc,argv);
     }

    G4VisManager *visManager = new G4VisExecutive;
    visManager->Initialize();
    if(uiExecutive)
    {
      uiManager->ApplyCommand("/control/execute vis.mac");

      uiExecutive->SessionStart();
    }
    else
    {
      G4String command = "/control/execute ";
      G4String fileName = argv[1];
      uiManager->ApplyCommand(command+fileName);
    }




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
*/
	return 0;
}
