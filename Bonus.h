#ifndef BONUS_H
#define BONUS_H
#include "Settings.h"
#include "Paddle.h"
#include "Ball.h"
/// <summary>
/// Typ enumeryczny przechowuj�cy typy bonus�w
/// kt�re b�d� uruchamiane po zbiciu bloczka
/// </summary>
enum BonusType
{
	BLUE_BLOCK_BONUS,///bonus niebieskiego bloczka - zwi�kszenie d�ugo�ci deski
	GREEN_BLOCK_BONUS,///bonus zielonego bloczka - zmniejszenie d�ugo�ci deski
	YELLOW_BLOCK_BONUS,///bonus ��tego bloczka - dodatkowe �ycie 
	PINK_BLOCK_BONUS,///bonus r�owego bloczka - zwi�kszenie pr�dko�ci pi�ki
	NO_BONUS///bia�y bloczek po zbiciu nie aktywuje �adnego bonusu
};
/// <summary>
/// Klasa reprezentuj�ca bonus, kt�ry zostaje aktywowany po wykryciu kolizji bloczka z pi�k�
/// </summary>
class Bonus
{
	BonusType type;
public:
	/// <summary>
	/// Konstruktor domy�lny
	/// </summary>
	Bonus() {};
	/// <summary>
	/// Konstruktor tworz�cy bonus, jegi typ zale�y od koloru bloczka
	/// </summary>
	/// <param name="type">typ bonusu</param>
	Bonus(BonusType type) :type(type){};
	/// <summary>
	/// Metoda zwracaj�ca typ bonusu
	/// </summary>
	/// <returns>typ bonusu</returns>
	BonusType getType() { return this->type; };
	/// <summary>
	/// Metoda aktywuj�ca bonus, je�li bonus tego samego typu nie jest ju� aktywny
	/// </summary>
	/// <param name="paddle">paletka</param>
	/// <param name="ball">pi�ka</param>
	void Play(Paddle& paddle, Ball& ball);

};
#endif

