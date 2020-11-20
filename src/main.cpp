#include <iostream>
#include <SFML/Graphics.hpp>
#include "Definition.hpp"
#include "Board.hpp"

int main()
{
   sf::ContextSettings settings;
   settings.antialiasingLevel = 16;
   sf::RenderWindow window(sf::VideoMode(WIDTH, HEIGHT), "Draughts", sf::Style::Default, settings);
   sf::Event event;
   Board board;
   while (window.isOpen())
   {
      while (window.pollEvent(event))
      {
         switch (event.type)
         {
         case sf::Event::Closed:
            window.close();
            break;

         default:
            break;
         }
      }
      window.draw(board);
      window.display();
   }
   return 0;
}