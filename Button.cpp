#include "Button.h"


Button::Button(const int x, const int y, const sf::Texture* tex,
 sf::Vector2f position, ButtonActionType type):sf::RectangleShape(sf::Vector2f(x,y))
{
	this->setOrigin(x / 2, y / 2);
	this->setTexture(tex);
	this->setPosition(position);
	this->isActive = false;
	this->buttonActionType = type;
}

bool Button::isMouseOnButton(sf::Event e)
{
	if (e.type = sf::Event::MouseMoved)
	{
		if (this->getGlobalBounds().contains(sf::Vector2f(e.mouseMove.x, e.mouseMove.y)))
		{
			this->setOutlineThickness(10);
			this->setOutlineColor(sf::Color::Yellow);
			return true;
			//this->setFillColor(sf::Color(0, 0, 0, 0));
		}
	}
	this->setOutlineThickness(0);
	return false;
}

ButtonActionType Button::isButtonClicked(sf::Event e)
{
	if (e.type == sf::Event::MouseButtonPressed)
	{
		if (this->getGlobalBounds().contains(sf::Vector2f(e.mouseButton.x, e.mouseButton.y)))
		{
			this->isActive = true;
			return this->buttonActionType;
		}
	}
	
	return NO_ACTION;

}

