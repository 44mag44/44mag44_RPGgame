#pragma once


#include "Core/Event/KeyEvent.hpp"

class KeyReleasedEvent : public KeyEvent
{
public:
	explicit KeyReleasedEvent(int Key)
		:
		KeyEvent(Key)
	{
	}



	static EventType GetStaticType()
	{
		return EventType::KeyReleased;
	}



	EventType GetType() const override
	{
		return	GetStaticType();
	}
};