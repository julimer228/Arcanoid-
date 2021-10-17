#ifndef BLOCK_H
#define BLOCK_H
#include "Settings.h"
#include "Bonus.h"
/// <summary>
/// Klasa reprezentuj¹ca bloczek,
/// dziedziczy po sf::RectangleShape
/// </summary>
class Block:public sf::RectangleShape
{
private: 
	/// <summary>
	/// Szerokoœæ
	/// </summary>
	unsigned int x_size;
	/// <summary>
	/// D³ugoœæ
	/// </summary>
	unsigned int y_size;
public:
	/// <summary>
	/// Metoda uruchamiaj¹ca bonus po zbiciu bloczka
	/// </summary>
	virtual void PlayBonus(Paddle& paddle, Ball& ball ) {};
	/// <summary>
	/// FUnkcja zwracaj¹ca liczbê punktów za zbicie bloczka
	/// </summary>
	/// <returns>liczb punktów za zbicie bloczka</returns>
	virtual int getPoints() { return 0; };
	/// <summary>
	/// Konstruktor domyœlny
	/// </summary>
	Block();
	/// <summary>
	/// Konstruktor tworz¹cy bloczek o zadanych wymiarach
	/// </summary>
	/// <param name="x">szerokoœæ bloczka</param>
	/// <param name="y">wysokoœæ bloczka</param>
	Block(const unsigned int x, const unsigned int y);
};
#endif

