#pragma once
#include "Definition.hpp"
#include <SFML/Graphics.hpp>
#include "Piece.hpp"
#include "TileDrawable.hpp"

class Tile : public sf::Drawable
{
private:
    sf::Color color;
    sf::Vector2f pos;
    TileDrawable *t;

public:
    Tile(TileDrawable &, bool, int, int);
    Piece piece;
    ~Tile();
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
    void setPiece(Piece &);
};
