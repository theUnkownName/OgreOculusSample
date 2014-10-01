// ----------------------------------------------------------------------
// Visualization of Patient data (Dicoms and surface models) using the
// Oculus Rift.
// ---------------------------------------------------------------------
// August 2014, Micha Pfeiffer
// Couples Ogre3D and the Oculus Rift SDK to render Meshes in a VR setting
//

#include <iostream>

#include "App.h"

extern "C" {

    int main(int argc, char *argv[])
    {
		std::cout << "Hello world." << std::endl;

		// Creates the main program and starts rendering. When a framelistener
		// returns false, this will return.
		App* app = new App();

		delete app;

        return 0;
    }
}