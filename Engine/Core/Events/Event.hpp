#pragma once

class Event
{
public:
	virtual ~Event() = default;

	bool Handled = false;
};