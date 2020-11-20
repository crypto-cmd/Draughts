#include "TileDrawable.hpp"
#include "Definition.hpp"

TileDrawable::TileDrawable()
{
    setPosition(sf::Vector2f(0, 0));
    setSize(sf::Vector2f(TILE_SIZE, TILE_SIZE));
};
TileDrawable::~TileDrawable(){};
