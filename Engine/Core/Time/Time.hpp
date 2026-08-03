#pragma once

#include<chrono>

class Time
{
public:
	static void Update();
	static float GetDeltaTime();

private:
	static float m_DeltaTime;

	static std::chrono::steady_clock::time_point m_LastTime;
};