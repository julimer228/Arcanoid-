#include "Bonus.h"

void Bonus::Play(Paddle& paddle, Ball& ball)
{
	if (this->type == BLUE_BLOCK_BONUS)
	{
		if(paddle.getGlobalBounds().width==PADDLE_X)
		paddle.setSize(sf::Vector2f(PADDLE_X / 2, PADDLE_Y));
		return;
	}
	if (this->type == GREEN_BLOCK_BONUS)
	{
		if (paddle.getGlobalBounds().width == PADDLE_X)
		paddle.setSize(sf::Vector2f(PADDLE_X * 2, PADDLE_Y));
		return;
	}
	if (this->type == YELLOW_BLOCK_BONUS)
	{
		if (ball.getSpeed() == BALL_SPEED && ball.getSpeedy() == BALL_SPEED)
		{
			ball.setSpeed(ball.getSpeed() * 0.5);
			ball.setSpeedy(ball.getSpeedy() * 0.5);
		}
		return;
	}
	if (this->type == PINK_BLOCK_BONUS)
	{

			ball.setFillColor(sf::Color::Magenta);
		return;
	}


}
