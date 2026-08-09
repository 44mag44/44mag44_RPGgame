#pragma once

#include <memory>

#include "Core/Application/Application.hpp"
#include "Core/World/World.hpp"
#include "Core/Window/Window.hpp"
#include "Core/Renderer/Renderer.hpp"
#include "Core/Renderer/NullRenderer.hpp"



class Engine
{
public:
	Engine(Application& application, std::unique_ptr<Renderer> renderer);

	void Run();

private:
	Application& m_Application;

	bool m_Running;

	World m_World;
	Window m_Window;
	
	std::unique_ptr<Renderer> m_Renderer;

	void ProcessInput();

};

		