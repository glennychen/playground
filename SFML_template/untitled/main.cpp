#include <SFML/Graphics.hpp>

// sudo update-alternatives --config g++
// g++ -c sfml.cpp && g++ sfml.o -o sfml-app -lsfml-graphics -lsfml-window -lsfml-system --std=c++11

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    sf::Texture texture;
    sf::Texture texture2;
    if (!texture.loadFromFile("/home/bps/Downloads/d1.png", sf::IntRect(0, 0, 256, 256)))
        return -1;
    if (!texture2.loadFromFile("/home/bps/Downloads/d2.png", sf::IntRect(0, 0, 256, 256)))
        return -1;
    // Assign it to a sprite
    sf::Sprite sprite;
    sf::Sprite sprite2;

    sprite.setTexture(texture);
    sprite2.setTexture(texture2);

    int offset = 20;
    int move_right = true;
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        //window.draw(shape);

        // Draw the textured sprite
        window.draw(sprite);
        sprite.setPosition(0, 0);
        window.draw(sprite2);
        sprite2.setPosition(100, 0);

        if (move_right && offset < 500) ++offset;
        if (offset>=500) move_right = false;
        if (!move_right && offset > 0) --offset;
        if (offset<=0) move_right = true;

        sprite.move(offset, 0);
        window.display();
        window.setFramerateLimit(200);
    }

    return 0;
}
