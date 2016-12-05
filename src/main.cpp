// System Headers
#define GLEW_STATIC      // use static GLEW libs
#include <GL/glew.h>     // MUST INCLUDE BEFORE GLFW (gl.h)
#include <GLFW/glfw3.h>

// Standard Headers
#include <cstdio>
#include <cstdlib>
#include <random>
#include <ctime> // for time()

// Our classes
#include "core/Engine.h"

std::default_random_engine generator;

int main(int argc, char * argv[]) 
{
	srand(time(NULL)); // Seed rand with time

    // Load GLFW and Create a Window
    glfwInit();
	
	if(!settings->init())
	{
		fprintf(stderr, "Failed to Create OpenGL Context");
		return EXIT_FAILURE;
	}

	settings->mainLoop();

	glfwTerminate();

	Engine engine;

	engine.AddSystem();

	engine.Run();

	engine.Shutdown();

    return EXIT_SUCCESS;
}