#include "Core/Application/Application.hpp"

#include <iostream>

Application::Application()
{
	// Constructor implementation (if needed)	
}

// function to update the game state

void Application::OnUpdate()
{
	// For now, we will just simulate game updates
	// In a real application, you would update the game state here
	std::cout << "Updating game state..." << std::endl;
}

// function to render the game

void Application::OnRender()
{
	// For now, we will just simulate rendering
	// In a real application, you would render the game here
	std::cout << "Rendering game..." << std::endl;
}