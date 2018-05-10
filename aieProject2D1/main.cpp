#include "aieProject2D1App.h"

// Bronwyn Sutton

int main() {
	
	// allocation
	auto app = new aieProject2D1App();

	// initialise and loop
	// Screen name, size and is it full screen?
	app->run("Tank Skill Tester", 1280, 720, false);

	// deallocation
	delete app;

	return 0;
}