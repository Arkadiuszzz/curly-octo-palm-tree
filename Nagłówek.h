#ifndef BUTTON_H
#define BUTTON_H
#include <SFML/Graphics.hpp>

class button
{
public:
    button(float x, float y, float width, float height, std::string words, sf::Font nFont);
    virtual ~button();
    void render(sf::RenderWindow& window);
    void update(sf::Vector2i MousePosition);



protected:

private:
    sf::RectangleShape shape;
    sf::Text text;
    sf::Font font;
    std::string words;
};

#endif // BUTTON_H#pragma once
