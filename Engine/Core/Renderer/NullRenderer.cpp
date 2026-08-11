#include "Core/Renderer/NullRenderer.hpp"

#include <iostream>



void NullRenderer::BeginFrame()
{
	// No rendering is performed in the null renderer
	std::cout << "Begin Frame" << std::endl;
}

void NullRenderer::EndFrame()
{
	// No rendering is performed in the null renderer
	std::cout << "End Frame" << std::endl;
}

void NullRenderer::Draw()
{
	// No rendering is performed in the null renderer
	std::cout << "Draw" << std::endl;
}