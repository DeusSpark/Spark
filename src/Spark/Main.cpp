#include <SFML/Graphics.hpp>
#include <Spark/Logger/Logger.hpp>

int main()
{
    sp::Logger logger;
    logger.log(sp::Logger::Trace, "Hi!");

    sf::RenderWindow window(sf::VideoMode(200, 200), "Spark");
    logger.log(sp::Logger::Info, "Window was created");

    window.setVerticalSyncEnabled(true);

    sf::CircleShape shape(100.f);
    logger.log(sp::Logger::Info, "Shape was created");

    shape.setFillColor(sf::Color::Green);

    sf::Event event;
    while (window.isOpen())
    {
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
                logger.log(sp::Logger::Info, "Window was closed");
            }
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}
