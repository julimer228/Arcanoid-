#include "Block.h"

Block::Block()
{
}

Block::Block(const unsigned int x, const unsigned int y):sf::RectangleShape(sf::Vector2f(x, y))
{
	x_size = x;
	y_size = y;
	this->setOrigin(x_size / 2, y_size / 2);
}
