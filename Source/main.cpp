#include "Core/Application/Application.hpp"
#include "Core/Engine/Engine.hpp"

int main()
{
	Application app;
	Engine engine(app);

	engine.Run();


	return 0;
}