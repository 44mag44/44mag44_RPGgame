#pragma once

class Application
{
public:
	Application();

	void Run();

private:
	bool m_Runninge;

	void ProcessInput();
	void Update();
	void Render();

};