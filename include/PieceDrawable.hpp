#pragma once
#include <SFML/Graphics.hpp>
class PieceDrawable : public sf::Drawable
{
public:
    PieceDrawable();
    ~PieceDrawable();
    void draw(sf::RenderTarget &, sf ::RenderStates) const override;
    void setColor(const sf::Color &);
    void setPosition(int x, int y);

private:
    sf::CircleShape topEllipse, shadow;
};