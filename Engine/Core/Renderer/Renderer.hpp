#pragma once

class Renderer
{
public:
	virtual ~Renderer() = default;

	virtual void BeginFrame() = 0;
	virtual void EndFrame() = 0;
	virtual void Draw() = 0;
};	