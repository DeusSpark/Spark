#pragma once

#include <Engine/Logger.hpp>
#include <Engine/State.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>

namespace sp
{

class Engine
{
public:
    static Engine& getInstance();

    Logger& getLogger();

    void run();

    void setState(State* state);

private:
    Engine();
    ~Engine();

private:
    static Engine m_instance;

    sf::RenderWindow m_window;
    sf::Event        m_event;

    Logger m_logger;

    State* m_state;

private:
    void handleInput();
    void update();
    void render();
};

} // namespace sp