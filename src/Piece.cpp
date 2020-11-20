#include "Piece.hpp"
#include "PieceDrawable.hpp"
#include "Definition.hpp"
#include <SFML/Graphics.hpp>
Piece::Piece()
{
    this->pos = sf::Vector2i(2, 2);
    isViable = false;
};
Piece::Piece(PieceDrawable &p, Piece::Alliance &alliance)
{
    this->p = &p;
    isViable = false;
    this->alliance = alliance;
    this->pos = sf::Vector2i(0, 0);
};
Piece::~Piece(){};
void Piece::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    p->setPosition(pos.x, pos.y);
    p->setColor(DARK_PIECE_COLOUR);
    target.draw(*p, states);
}
