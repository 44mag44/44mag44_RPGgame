#pragma once

#include "Core/World/World.hpp"
#include "Core/Window/Window.hpp"

class Engine
{
public:
	Engine();

	void Run();

private:
	bool m_Running;

	World m_World;
	Window m_Window;

	void ProcessInput();
	void Update();
	void Render();
};

		