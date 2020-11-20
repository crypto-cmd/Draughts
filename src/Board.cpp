#include "Board.hpp"
#include "Tile.hpp"
#include "Piece.hpp"
#include "Definition.hpp"
#include <iostream>
#include <SFML/Graphics.hpp>

Board::Board()
{

    for (auto i = 0; i < 8; i++)
    {
        for (auto j = 0; j < 8; j++)
        {
            Tile tile(t, (i + j) % 2 == 0, i, j);
            tiles.push_back(tile);
        };
    };
};
Board::~Board(){};
void Board::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    for (int i = 0; i < 64; i++)
    {
        const Tile *t = &tiles.at(i);
        target.draw(*t, states);

        if (t->piece.isViable)
        {
            std::cout << "Draw" << std::endl;
            target.draw(t->piece, states);
        }
    }
};