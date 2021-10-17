#include "BlueBlock.h"

int BlueBlock::getPoints()
{
	return BLUE_BLOCK_POINTS;
}


BlueBlock::BlueBlock(const unsigned int x, const unsigned int y):Block(x,y)
{
	BonusType b = BLUE_BLOCK_BONUS;
	bonus=std::unique_ptr<Bonus>(new Bonus(b));
	this->setFillColor(sf::Color::Blue);
}

void BlueBlock::PlayBonus(Paddle& paddle, Ball& ball)
{
	this->bonus->Play(paddle, ball);
}

BlueBlock::BlueBlock()
{
}