#include "Core/Application.hpp"

#include <iostream>

Application::Application()
	:
	m_Runninge(true)
{
	
}

void Application::Run()
{
	while (m_Runninge)
	{
		ProcessInput();
		Update();
		Render();
	}
	
	std::cout << "Application created!" << std::endl;
}


// function to process input

void Application::ProcessInput()
{
	// For now, we will just simulate input processing
	// In a real application, you would handle user input here
	std::cout << "Processing input..." << std::endl;
}

// function to update the game state

void Application::Update()
{
	// For now, we will just simulate game updates
	// In a real application, you would update the game state here
	std::cout << "Updating game state..." << std::endl;
}

// function to render the game

void Application::Render()
{
	// For now, we will just simulate rendering
	// In a real application, you would render the game here
	std::cout << "Rendering game..." << std::endl;
}