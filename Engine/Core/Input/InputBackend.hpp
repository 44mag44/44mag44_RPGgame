#pragma once

#include "Core/Event/Event.hpp"

class InputBackend
{
public:
    virtual ~InputBackend() = default;
    
    virtual bool IsKeyPressed() = 0;   
};