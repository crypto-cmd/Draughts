#include "PieceDrawable.hpp"
#include <SFML/Graphics.hpp>
#include "Definition.hpp"
PieceDrawable::PieceDrawable()
{
    topEllipse.setRadius(TILE_SIZE);
    topEllipse.scale(sf::Vector2f(PIECE_X_SCALE, PIECE_Y_SCALE));
    topEllipse.setOutlineColor(sf::Color::Black);
    topEllipse.setOutlineThickness(TILE_SIZE * 0.2);
    topEllipse.setPointCount(1000);
    shadow.setRadius(TILE_SIZE);
    shadow.scale(sf::Vector2f(PIECE_X_SCALE, PIECE_Y_SCALE));
    shadow.setOutlineColor(sf::Color::Black);
    shadow.setOutlineThickness(TILE_SIZE * 0.2);
    shadow.setFillColor(sf::Color::Black);
    shadow.setPointCount(1000);
};
PieceDrawable::~PieceDrawable(){};
void PieceDrawable::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(shadow, states);
    target.draw(topEllipse, states);
};
void PieceDrawable::setColor(const sf::Color &colour)
{
    topEllipse.setFillColor(colour);
};
void PieceDrawable::setPosition(int x, int y)
{
    topEllipse.setPosition(sf::Vector2f(x * TILE_SIZE, y * TILE_SIZE));
    topEllipse.move(
        sf::Vector2f((TILE_SIZE - TILE_SIZE * PIECE_X_SCALE * 2) / 2,
                     (TILE_SIZE - TILE_SIZE * PIECE_Y_SCALE * 2) / 2));
    shadow.setPosition(sf::Vector2f(x * TILE_SIZE, y * TILE_SIZE));
    shadow.move(
        sf::Vector2f((TILE_SIZE - TILE_SIZE * PIECE_X_SCALE * 2) / 2,
                     (TILE_SIZE - TILE_SIZE * PIECE_Y_SCALE * 2) / 2 + TILE_SIZE * 0.1f));
}