#include <Engine/Engine.hpp>

namespace sp
{

Engine Engine::m_instance;

Engine::Engine() : m_window(sf::VideoMode(1280, 720), "Spark"), m_state(nullptr)
{
    m_logger.log(sp::Logger::Info, "Window was opened");
    m_window.setVerticalSyncEnabled(true);
}

Engine::~Engine()
{
}

Engine& Engine::getInstance()
{
    return m_instance;
}

Logger& Engine::getLogger()
{
    return m_logger;
}

void Engine::setState(State* state)
{
    if (!state)
        m_logger.log(Logger::Error, "Engine::setState(State* state)::empty state");

    m_state = state;
}

void Engine::run()
{
    while (m_window.isOpen())
    {
        handleInput();
        update();
        render();
    }
}

void Engine::handleInput()
{
    while (m_window.pollEvent(m_event))
    {
        if (m_event.type == sf::Event::Closed)
        {
            m_window.close();
            m_logger.log(sp::Logger::Info, "Window was closed");
        }
    }
}

void Engine::update()
{
    if (!m_state)
        m_logger.log(Logger::Fatal, "Engine::update()::SET STATE!");
    else
        m_state->update(0);
}

void Engine::render()
{
    m_window.clear();

    m_window.display();
}

} // namespace sp