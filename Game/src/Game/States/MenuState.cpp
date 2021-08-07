#include <Engine/Engine.hpp>
#include <Game/States/MenuState.hpp>

MenuState::MenuState()
{
    sp::Logger& logger = sp::Engine::getInstance().getLogger();
    logger.log(sp::Logger::Info, "MenuState was created");
}

MenuState::~MenuState()
{
    sp::Logger& logger = sp::Engine::getInstance().getLogger();
    logger.log(sp::Logger::Info, "MenuState was destroyed");
}

void MenuState::update(float dt)
{
}