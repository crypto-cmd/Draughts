#pragma once
#include "Tile.hpp"
#include "TileDrawable.hpp"
#include <SFML/Graphics.hpp>
#include "PieceDrawable.hpp"
class Board : public sf::Drawable
{
public:
    Board();
    ~Board();

private:
    std::vector<Tile> tiles;
    TileDrawable t;
    PieceDrawable p;
    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;
};