# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/harriet/geant4/neutron_example

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/harriet/geant4/neutron_example/build

# Include any dependencies generated for this target.
include CMakeFiles/Sim.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Sim.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Sim.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Sim.dir/flags.make

CMakeFiles/Sim.dir/Sim.cc.o: CMakeFiles/Sim.dir/flags.make
CMakeFiles/Sim.dir/Sim.cc.o: ../Sim.cc
CMakeFiles/Sim.dir/Sim.cc.o: CMakeFiles/Sim.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/harriet/geant4/neutron_example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Sim.dir/Sim.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Sim.dir/Sim.cc.o -MF CMakeFiles/Sim.dir/Sim.cc.o.d -o CMakeFiles/Sim.dir/Sim.cc.o -c /home/harriet/geant4/neutron_example/Sim.cc

CMakeFiles/Sim.dir/Sim.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Sim.dir/Sim.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/harriet/geant4/neutron_example/Sim.cc > CMakeFiles/Sim.dir/Sim.cc.i

CMakeFiles/Sim.dir/Sim.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Sim.dir/Sim.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/harriet/geant4/neutron_example/Sim.cc -o CMakeFiles/Sim.dir/Sim.cc.s

CMakeFiles/Sim.dir/src/DetectorConstruction.cc.o: CMakeFiles/Sim.dir/flags.make
CMakeFiles/Sim.dir/src/DetectorConstruction.cc.o: ../src/DetectorConstruction.cc
CMakeFiles/Sim.dir/src/DetectorConstruction.cc.o: CMakeFiles/Sim.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/harriet/geant4/neutron_example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Sim.dir/src/DetectorConstruction.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Sim.dir/src/DetectorConstruction.cc.o -MF CMakeFiles/Sim.dir/src/DetectorConstruction.cc.o.d -o CMakeFiles/Sim.dir/src/DetectorConstruction.cc.o -c /home/harriet/geant4/neutron_example/src/DetectorConstruction.cc

CMakeFiles/Sim.dir/src/DetectorConstruction.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Sim.dir/src/DetectorConstruction.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/harriet/geant4/neutron_example/src/DetectorConstruction.cc > CMakeFiles/Sim.dir/src/DetectorConstruction.cc.i

CMakeFiles/Sim.dir/src/DetectorConstruction.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Sim.dir/src/DetectorConstruction.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/harriet/geant4/neutron_example/src/DetectorConstruction.cc -o CMakeFiles/Sim.dir/src/DetectorConstruction.cc.s

CMakeFiles/Sim.dir/src/ElectromagneticPhysics.cc.o: CMakeFiles/Sim.dir/flags.make
CMakeFiles/Sim.dir/src/ElectromagneticPhysics.cc.o: ../src/ElectromagneticPhysics.cc
CMakeFiles/Sim.dir/src/ElectromagneticPhysics.cc.o: CMakeFiles/Sim.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/harriet/geant4/neutron_example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Sim.dir/src/ElectromagneticPhysics.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Sim.dir/src/ElectromagneticPhysics.cc.o -MF CMakeFiles/Sim.dir/src/ElectromagneticPhysics.cc.o.d -o CMakeFiles/Sim.dir/src/ElectromagneticPhysics.cc.o -c /home/harriet/geant4/neutron_example/src/ElectromagneticPhysics.cc

CMakeFiles/Sim.dir/src/ElectromagneticPhysics.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Sim.dir/src/ElectromagneticPhysics.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/harriet/geant4/neutron_example/src/ElectromagneticPhysics.cc > CMakeFiles/Sim.dir/src/ElectromagneticPhysics.cc.i

CMakeFiles/Sim.dir/src/ElectromagneticPhysics.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Sim.dir/src/ElectromagneticPhysics.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/harriet/geant4/neutron_example/src/ElectromagneticPhysics.cc -o CMakeFiles/Sim.dir/src/ElectromagneticPhysics.cc.s

CMakeFiles/Sim.dir/src/HadronElasticPhysicsHP.cc.o: CMakeFiles/Sim.dir/flags.make
CMakeFiles/Sim.dir/src/HadronElasticPhysicsHP.cc.o: ../src/HadronElasticPhysicsHP.cc
CMakeFiles/Sim.dir/src/HadronElasticPhysicsHP.cc.o: CMakeFiles/Sim.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/harriet/geant4/neutron_example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Sim.dir/src/HadronElasticPhysicsHP.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Sim.dir/src/HadronElasticPhysicsHP.cc.o -MF CMakeFiles/Sim.dir/src/HadronElasticPhysicsHP.cc.o.d -o CMakeFiles/Sim.dir/src/HadronElasticPhysicsHP.cc.o -c /home/harriet/geant4/neutron_example/src/HadronElasticPhysicsHP.cc

CMakeFiles/Sim.dir/src/HadronElasticPhysicsHP.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Sim.dir/src/HadronElasticPhysicsHP.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/harriet/geant4/neutron_example/src/HadronElasticPhysicsHP.cc > CMakeFiles/Sim.dir/src/HadronElasticPhysicsHP.cc.i

CMakeFiles/Sim.dir/src/HadronElasticPhysicsHP.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Sim.dir/src/HadronElasticPhysicsHP.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/harriet/geant4/neutron_example/src/HadronElasticPhysicsHP.cc -o CMakeFiles/Sim.dir/src/HadronElasticPhysicsHP.cc.s

CMakeFiles/Sim.dir/src/NeutronHPMessenger.cc.o: CMakeFiles/Sim.dir/flags.make
CMakeFiles/Sim.dir/src/NeutronHPMessenger.cc.o: ../src/NeutronHPMessenger.cc
CMakeFiles/Sim.dir/src/NeutronHPMessenger.cc.o: CMakeFiles/Sim.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/harriet/geant4/neutron_example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Sim.dir/src/NeutronHPMessenger.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Sim.dir/src/NeutronHPMessenger.cc.o -MF CMakeFiles/Sim.dir/src/NeutronHPMessenger.cc.o.d -o CMakeFiles/Sim.dir/src/NeutronHPMessenger.cc.o -c /home/harriet/geant4/neutron_example/src/NeutronHPMessenger.cc

CMakeFiles/Sim.dir/src/NeutronHPMessenger.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Sim.dir/src/NeutronHPMessenger.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/harriet/geant4/neutron_example/src/NeutronHPMessenger.cc > CMakeFiles/Sim.dir/src/NeutronHPMessenger.cc.i

CMakeFiles/Sim.dir/src/NeutronHPMessenger.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Sim.dir/src/NeutronHPMessenger.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/harriet/geant4/neutron_example/src/NeutronHPMessenger.cc -o CMakeFiles/Sim.dir/src/NeutronHPMessenger.cc.s

CMakeFiles/Sim.dir/src/physicsList.cc.o: CMakeFiles/Sim.dir/flags.make
CMakeFiles/Sim.dir/src/physicsList.cc.o: ../src/physicsList.cc
CMakeFiles/Sim.dir/src/physicsList.cc.o: CMakeFiles/Sim.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/harriet/geant4/neutron_example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Sim.dir/src/physicsList.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Sim.dir/src/physicsList.cc.o -MF CMakeFiles/Sim.dir/src/physicsList.cc.o.d -o CMakeFiles/Sim.dir/src/physicsList.cc.o -c /home/harriet/geant4/neutron_example/src/physicsList.cc

CMakeFiles/Sim.dir/src/physicsList.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Sim.dir/src/physicsList.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/harriet/geant4/neutron_example/src/physicsList.cc > CMakeFiles/Sim.dir/src/physicsList.cc.i

CMakeFiles/Sim.dir/src/physicsList.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Sim.dir/src/physicsList.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/harriet/geant4/neutron_example/src/physicsList.cc -o CMakeFiles/Sim.dir/src/physicsList.cc.s

# Object files for target Sim
Sim_OBJECTS = \
"CMakeFiles/Sim.dir/Sim.cc.o" \
"CMakeFiles/Sim.dir/src/DetectorConstruction.cc.o" \
"CMakeFiles/Sim.dir/src/ElectromagneticPhysics.cc.o" \
"CMakeFiles/Sim.dir/src/HadronElasticPhysicsHP.cc.o" \
"CMakeFiles/Sim.dir/src/NeutronHPMessenger.cc.o" \
"CMakeFiles/Sim.dir/src/physicsList.cc.o"

# External object files for target Sim
Sim_EXTERNAL_OBJECTS =

Sim: CMakeFiles/Sim.dir/Sim.cc.o
Sim: CMakeFiles/Sim.dir/src/DetectorConstruction.cc.o
Sim: CMakeFiles/Sim.dir/src/ElectromagneticPhysics.cc.o
Sim: CMakeFiles/Sim.dir/src/HadronElasticPhysicsHP.cc.o
Sim: CMakeFiles/Sim.dir/src/NeutronHPMessenger.cc.o
Sim: CMakeFiles/Sim.dir/src/physicsList.cc.o
Sim: CMakeFiles/Sim.dir/build.make
Sim: /home/harriet/geant4/Geant4/geant4-v11.1.3/geant4-install/lib/libG4Tree.so
Sim: /home/harriet/geant4/Geant4/geant4-v11.1.3/geant4-install/lib/libG4FR.so
Sim: /home/harriet/geant4/Geant4/geant4-v11.1.3/geant4-install/lib/libG4GMocren.so
Sim: /home/harriet/geant4/Geant4/geant4-v11.1.3/geant4-install/lib/libG4visHepRep.so
Sim: /home/harriet/geant4/Geant4/geant4-v11.1.3/geant4-install/lib/libG4RayTracer.so
Sim: /home/harriet/geant4/Geant4/geant4-v11.1.3/geant4-install/lib/libG4VRML.so
Sim: /home/harriet/geant4/Geant4/geant4-v11.1.3/geant4-install/lib/libG4ToolsSG.so
Sim: /home/harriet/geant4/Geant4/geant4-v11.1.3/geant4-install/lib/libG4OpenGL.so
Sim: /home/harriet/geant4/Geant4/geant4-v11.1.3/geant4-install/lib/libG4vis_management.so
Sim: /home/harriet/geant4/Geant4/geant4-v11.1.3/geant4-install/lib/libG4modeling.so
Sim: /home/harriet/geant4/Geant4/geant4-v11.1.3/geant4-install/lib/libG4interfaces.so
Sim: /home/harriet/geant4/Geant4/geant4-v11.1.3/geant4-install/lib/libG4persistency.so
Sim: /home/harriet/geant4/Geant4/geant4-v11.1.3/geant4-install/lib/libG4error_propagation.so
Sim: /home/harriet/geant4/Geant4/geant4-v11.1.3/geant4-install/lib/libG4readout.so
Sim: /home/harriet/geant4/Geant4/geant4-v11.1.3/geant4-install/lib/libG4physicslists.so
Sim: /home/harriet/geant4/Geant4/geant4-v11.1.3/geant4-install/lib/libG4run.so
Sim: /home/harriet/geant4/Geant4/geant4-v11.1.3/geant4-install/lib/libG4event.so
Sim: /home/harriet/geant4/Geant4/geant4-v11.1.3/geant4-install/lib/libG4tracking.so
Sim: /home/harriet/geant4/Geant4/geant4-v11.1.3/geant4-install/lib/libG4parmodels.so
Sim: /home/harriet/geant4/Geant4/geant4-v11.1.3/geant4-install/lib/libG4processes.so
Sim: /home/harriet/geant4/Geant4/geant4-v11.1.3/geant4-install/lib/libG4digits_hits.so
Sim: /home/harriet/geant4/Geant4/geant4-v11.1.3/geant4-install/lib/libG4track.so
Sim: /home/harriet/geant4/Geant4/geant4-v11.1.3/geant4-install/lib/libG4particles.so
Sim: /home/harriet/geant4/Geant4/geant4-v11.1.3/geant4-install/lib/libG4geometry.so
Sim: /home/harriet/geant4/Geant4/geant4-v11.1.3/geant4-install/lib/libG4materials.so
Sim: /home/harriet/geant4/Geant4/geant4-v11.1.3/geant4-install/lib/libG4graphics_reps.so
Sim: /usr/lib/x86_64-linux-gnu/libXmu.so
Sim: /usr/lib/x86_64-linux-gnu/libXext.so
Sim: /usr/lib/x86_64-linux-gnu/libXt.so
Sim: /usr/lib/x86_64-linux-gnu/libICE.so
Sim: /usr/lib/x86_64-linux-gnu/libSM.so
Sim: /usr/lib/x86_64-linux-gnu/libX11.so
Sim: /usr/lib/x86_64-linux-gnu/libGL.so
Sim: /usr/lib/x86_64-linux-gnu/libQt5OpenGL.so.5.15.3
Sim: /usr/lib/x86_64-linux-gnu/libQt5PrintSupport.so.5.15.3
Sim: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.15.3
Sim: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.15.3
Sim: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.3
Sim: /home/harriet/geant4/Geant4/geant4-v11.1.3/geant4-install/lib/libG4analysis.so
Sim: /usr/lib/x86_64-linux-gnu/libexpat.so
Sim: /home/harriet/geant4/Geant4/geant4-v11.1.3/geant4-install/lib/libG4zlib.so
Sim: /home/harriet/geant4/Geant4/geant4-v11.1.3/geant4-install/lib/libG4intercoms.so
Sim: /home/harriet/geant4/Geant4/geant4-v11.1.3/geant4-install/lib/libG4global.so
Sim: /home/harriet/geant4/Geant4/geant4-v11.1.3/geant4-install/lib/libG4clhep.so
Sim: /home/harriet/geant4/Geant4/geant4-v11.1.3/geant4-install/lib/libG4ptl.so.2.3.3
Sim: CMakeFiles/Sim.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/harriet/geant4/neutron_example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable Sim"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Sim.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Sim.dir/build: Sim
.PHONY : CMakeFiles/Sim.dir/build

CMakeFiles/Sim.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Sim.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Sim.dir/clean

CMakeFiles/Sim.dir/depend:
	cd /home/harriet/geant4/neutron_example/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/harriet/geant4/neutron_example /home/harriet/geant4/neutron_example /home/harriet/geant4/neutron_example/build /home/harriet/geant4/neutron_example/build /home/harriet/geant4/neutron_example/build/CMakeFiles/Sim.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Sim.dir/depend

