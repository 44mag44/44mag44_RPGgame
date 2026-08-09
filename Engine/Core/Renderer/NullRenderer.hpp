#pragma once

#include "Core/Renderer/Renderer.hpp"

class NullRenderer : public Renderer
{
public:
	void BeginFrame() override;
	void EndFrame() override;
	void Draw() override;
};