#pragma once


#include "Core/Event/KeyEvent.hpp"

class KeyReleasedEvent : public KeyEvent
{
public:
	explicit KeyReleasedEvent(Key key)
		:
		KeyEvent(key)
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