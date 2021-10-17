#ifndef BONUS_H
#define BONUS_H
#include "Settings.h"
#include "Paddle.h"
#include "Ball.h"
/// <summary>
/// Typ enumeryczny przechowuj¹cy typy bonusów
/// które bêd¹ uruchamiane po zbiciu bloczka
/// </summary>
enum BonusType
{
	BLUE_BLOCK_BONUS,///bonus niebieskiego bloczka - zwiêkszenie d³ugoœci deski
	GREEN_BLOCK_BONUS,///bonus zielonego bloczka - zmniejszenie d³ugoœci deski
	YELLOW_BLOCK_BONUS,///bonus ¿ó³tego bloczka - dodatkowe ¿ycie 
	PINK_BLOCK_BONUS,///bonus ró¿owego bloczka - zwiêkszenie prêdkoœci pi³ki
	NO_BONUS///bia³y bloczek po zbiciu nie aktywuje ¿adnego bonusu
};
/// <summary>
/// Klasa reprezentuj¹ca bonus, który zostaje aktywowany po wykryciu kolizji bloczka z pi³k¹
/// </summary>
class Bonus
{
	BonusType type;
public:
	/// <summary>
	/// Konstruktor domyœlny
	/// </summary>
	Bonus() {};
	/// <summary>
	/// Konstruktor tworz¹cy bonus, jegi typ zale¿y od koloru bloczka
	/// </summary>
	/// <param name="type">typ bonusu</param>
	Bonus(BonusType type) :type(type){};
	/// <summary>
	/// Metoda zwracaj¹ca typ bonusu
	/// </summary>
	/// <returns>typ bonusu</returns>
	BonusType getType() { return this->type; };
	/// <summary>
	/// Metoda aktywuj¹ca bonus, jeœli bonus tego samego typu nie jest ju¿ aktywny
	/// </summary>
	/// <param name="paddle">paletka</param>
	/// <param name="ball">pi³ka</param>
	void Play(Paddle& paddle, Ball& ball);

};
#endif

