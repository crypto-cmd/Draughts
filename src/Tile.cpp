#include "Tile.hpp"
#include "Definition.hpp"
#include <iostream>

Tile::Tile(TileDrawable &t, bool light, int x, int y) : color(light ? LIGHT_TILE_COLOUR : DARK_TILE_COLOR)
{
    this->pos = sf::Vector2f(x * TILE_SIZE, y * TILE_SIZE);
    this->t = &t;
};

Tile::~Tile(){};
void Tile::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    t->setFillColor(color);
    t->setPosition(pos);
    target.draw(*t, states);
    if (piece.isViable)
    {
        target.draw(piece, states);
    }
};
void Tile::setPiece(Piece &piece)
{
    this->piece = piece;
};