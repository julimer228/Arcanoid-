#include "Ball.h"


Ball::Ball():sf::CircleShape(BALL_RADIOUS,30U)
{
	radious = BALL_RADIOUS;
	this->angle = BALL_ANGLE;
	this->speed = BALL_SPEED;
	this->speed_y = BALL_SPEED;
	this->setPosition(BALL_START_POSITION_X, BALL_START_POSITION_Y);
	this->setFillColor(sf::Color::White);
	this->setOrigin(radious, radious);
}


bool Ball::isCollision(sf::RectangleShape block)
{
	
	if (this->getGlobalBounds().intersects(block.getGlobalBounds()))
	{
		this->speed_y = -speed_y;
		return true;
	}
	
	

	return false;
}

bool Ball::isCollisionScreen()
{

	//Odbij od lewej œciany
	if (this->getPosition().x <= radious) speed = -speed;
	//Odbij od górnej œciany
	if (this->getPosition().y <= radious) speed_y = -speed_y;
	//Odbij od prawej œciany
	if (this->getPosition().x>=WINDOW_X-MENU_X)speed = -speed;
	else
	return false;
	return true;

}

bool Ball::isCollisionPaddle(sf::RectangleShape paddle)
{

	if (this->getPosition().y>=paddle.getPosition().y-radious &&this->getGlobalBounds().intersects(paddle.getGlobalBounds()))
	{
		this->speed_y =-speed_y;		
		return true;
	}

	return false;
}

void Ball::BallMove()
{
	this->setPosition(sf::Vector2f(this->getPosition().x+speed, this->getPosition().y+speed_y));
}

bool Ball::isGameOver()
{
	if (this->getPosition().y > WINDOW_Y)
	{
		this->setFillColor(sf::Color::Transparent);
		this->speed = 0;
		this->angle = 0;
		return true;

	}
	return false;
}

void Ball::Restart()
{
	this->setPosition(BALL_START_POSITION_X, BALL_START_POSITION_Y);
	this->speed = BALL_SPEED;
	this->speed_y = BALL_SPEED;
	this->setFillColor(sf::Color::White);
}

void Ball::setSpeed(const int s)
{
	this->speed = s;
}

int Ball::getSpeed()
{
	return this->speed;
}

void Ball::setSpeedy(const int s)
{
	this->speed_y = s;
}

int Ball::getSpeedy()
{
	return speed_y;
}



