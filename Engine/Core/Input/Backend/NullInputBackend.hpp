#pragma once

#include "Core/Input/InputBackend.hpp"

class NullInputBackend : public InputBackend
{
    public:
       void ProcessEvents() override;
};