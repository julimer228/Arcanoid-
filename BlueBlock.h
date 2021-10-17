#ifndef BLUE_BLOCK_H
#define BLUE_BLOCK_H
#include "Block.h"
#include "Settings.h"
/// <summary>
/// Niebieski bloczek, dziedziczy po klasie Block
/// </summary>
class BlueBlock:public Block
{
private:
	/// <summary>
	/// Bonus
	/// </summary>
	std::unique_ptr<Bonus> bonus;

public:
	/// <summary>
	/// Funkcja zwarcaj¹ca liczbê punktów za zbicie bloczka
	/// </summary>
	/// <returns></returns>
	int getPoints();
	/// <summary>
	/// Konstruktor domyœlny
	/// </summary>
	BlueBlock();
	/// <summary>
	/// Konstruktor tworz¹cy bloczek o zadanych parametrach x i y
	/// </summary>
	/// <param name="x">szerokoœæ bloczka</param>
	/// <param name="y">wysokoœæ bloczka</param>
	BlueBlock(const unsigned int x, const unsigned int y);
	/// <summary>
	/// Uruchomienie bonusu po zbiciu bloczka
	/// </summary>
	void PlayBonus(Paddle& paddle, Ball& ball);

};
#endif BLUE_BLOCK_H

