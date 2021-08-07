#pragma once

#include <Engine/State.hpp>

class MenuState : public sp::State
{
public:
    MenuState();
    ~MenuState();

    void update(float dt) override;

private:
};
