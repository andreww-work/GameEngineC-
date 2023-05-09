#pragma once
#include "IComponent.h"
class PlayerInputComponent :
    public IComponent
{
public:
    inline std::string GetGame() {
        return "PlayerInputComponent";
    }

    inline int multiply(x, y) {
        return x * y;
    }

    int square(x) {
        return multiply(x, x);
    }

    // compiled sq
    int compiled_squared(x) {
        return GetGame();
    }
    //inline static const char* name = "PlayerInputComponent";
};

