#ifndef BLOCK_H
#define BLOCK_H
#include "Settings.h"
#include "Bonus.h"
/// <summary>
/// Klasa reprezentuj�ca bloczek,
/// dziedziczy po sf::RectangleShape
/// </summary>
class Block:public sf::RectangleShape
{
private: 
	/// <summary>
	/// Szeroko��
	/// </summary>
	unsigned int x_size;
	/// <summary>
	/// D�ugo��
	/// </summary>
	unsigned int y_size;
public:
	/// <summary>
	/// Metoda uruchamiaj�ca bonus po zbiciu bloczka
	/// </summary>
	virtual void PlayBonus(Paddle& paddle, Ball& ball ) {};
	/// <summary>
	/// FUnkcja zwracaj�ca liczb� punkt�w za zbicie bloczka
	/// </summary>
	/// <returns>liczb punkt�w za zbicie bloczka</returns>
	virtual int getPoints() { return 0; };
	/// <summary>
	/// Konstruktor domy�lny
	/// </summary>
	Block();
	/// <summary>
	/// Konstruktor tworz�cy bloczek o zadanych wymiarach
	/// </summary>
	/// <param name="x">szeroko�� bloczka</param>
	/// <param name="y">wysoko�� bloczka</param>
	Block(const unsigned int x, const unsigned int y);
};
#endif

