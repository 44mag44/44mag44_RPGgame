#pragma once


#include "Core/Event/Event.hpp"

class WindowCloseEvent : public Event
{
public:

	static EventType GetStaticType()
	{
		return EventType::WindowClose;
	}	

	EventType GetType() const override
	{
		return GetStaticType();
	}
};