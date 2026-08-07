#pragma once

#include "Core/World/World.hpp"
#include "Core/Window/Window.hpp"
#include "Core/Application/Application.hpp"
#include "Core/Renderer/Renderer.hpp"

class Engine
{
public:
	Engine(Application& application);

	void Run();

private:
	Application& m_Application;

	bool m_Running;

	World m_World;
	Window m_Window;
	Renderer m_Renderer;

	void ProcessInput();

};

		