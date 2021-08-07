#pragma once

namespace sp
{
class State
{
public:
    State();
    virtual ~State();

public:
    virtual void update(float dt) = 0;
};
} // namespace sp