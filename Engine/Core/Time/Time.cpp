#include "Core/Time/Time.hpp"



float Time::m_DeltaTime = 0.0f;



std::chrono::steady_clock::time_point Time::m_LastTime = 
	std::chrono::steady_clock::now();





void Time::Update()
{
	auto currentTime = std::chrono::steady_clock::now();



	m_DeltaTime =
		std::chrono::duration<float>(
			currentTime - m_LastTime
		).count();



	m_LastTime = currentTime;
}



float Time::GetDeltaTime()
{
	return m_DeltaTime;
}