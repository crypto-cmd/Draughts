#pragma once
#include <SFML/Graphics.hpp>
#include "PieceDrawable.hpp"
class Piece : public sf::Drawable
{
public:
    enum Alliance
    {
        WHITE,
        RED
    };
    Piece(PieceDrawable &, Piece::Alliance &);
    Piece();
    ~Piece();
    PieceDrawable *p;
    Alliance alliance;
    sf::Vector2i pos;
    bool isViable;

private:
    void draw(sf::RenderTarget &, sf::RenderStates) const override;
};