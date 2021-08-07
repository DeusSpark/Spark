#include <Engine/Engine.hpp>
#include <Game/States/MenuState.hpp>

int main()
{
    sp::Engine& engine = sp::Engine::getInstance();

    MenuState* menuState = new MenuState();

    engine.setState(menuState);
    engine.run();

    delete menuState;
}
