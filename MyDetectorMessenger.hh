#ifndef HDR_MYDETECTORMESSENGER_HH_
#define HDR_MYDETECTORMESSENGER_HH_

#include "G4UImessenger.hh"
#include "globals.hh"

class DetectorConstruction;
class G4UIcmdWithAString;
class G4UIcmdWithABool;
class G4UIcmdWithADoubleAndUnit;
class G4UIcommand;
//class G4UIcmdWithoutParameter;

class MyDetectorMessenger: public G4UImessenger
{
public:
	MyDetectorMessenger(DetectorConstruction*);
	~MyDetectorMessenger();

	virtual void SetNewValue(G4UIcommand* command, G4String newValue);
	virtual G4String GetCurrentValue(G4UIcommand* command);

private:
	DetectorConstruction* myDetectorConstruction;
	G4UIcmdWithAString *labMaterialUiCmd{nullptr};
	G4UIcmdWithAString *targetMaterialUiCmd{nullptr};
	G4UIcmdWithAString *shieldMaterialUiCmd{nullptr};
	G4UIcmdWithABool *shieldSwitchOnOffUiCmd{nullptr};
	G4UIcmdWithADoubleAndUnit *shieldThicknessUiCmd{nullptr};
	G4UIcommand *activeRotationAxisAngleCustomUiCmd{nullptr};
//	G4UIcmdWithABool *setMaterialLabelsCmd;
};

#endif 
