#include "Core/Engine/Engine.hpp"
#include "Core/Time/Time.hpp"


#include <iostream>

Engine::Engine()
	:
	m_Running(true)
{

}




void Engine::Run()
{
	m_Window.Create();

	while (m_Running && m_Window.IsOpen())
	{
		Time::Update();
	
		ProcessInput();
		Update();
		Render();
	}

	m_Window.Close();
}



void Engine::ProcessInput()
{
	std::cout << "Processing Engine input..." << std::endl;
}



void Engine::Update()
{
	m_World.Update();
}



void Engine::Render()
{
	std::cout << "Rendering Engine..." << std::endl;
}