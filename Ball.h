#ifndef BALL_H
#define BALL_H
#include "Settings.h"
/// <summary>
/// Klasa reprezentuj¹ca pi³kê
/// </summary>
class Ball:public sf::CircleShape
{
private:
	/// <summary>
	/// Promieñ pi³ki
	/// </summary>
	unsigned int radious;
	/// <summary>
	/// Aktualna prêdkoœæ pi³ki
	/// </summary>
	int speed;
	/// <summary>
	/// Aktualny k¹t prêdkoœci pi³ki z osi¹ x
	/// </summary>
	int angle;
	/// <summary>
	/// Prêdkoœæ pi³ki na osi y
	/// </summary>
	int speed_y;

public:
	/// <summary>
	/// Konstruktor domyœlny
	/// Tworzy pi³kê o okreœlonym rozmiarze
	/// </summary>
	Ball();
	/// <summary>
	/// Metoda sprawdzaj¹ca, czy wyst¹pi³a kolizja pi³ki z obiektem typu
	/// RectangleShape
	/// </summary>
	/// <param name="rect">obiekt z którym mog³a wyst¹piæ kolizja</param>
	/// <returns></returns>
	bool isCollision(sf::RectangleShape block);
	/// <summary>
	/// Funkcja wykrywaj¹ca kolizjê pi³ki z lew¹, praw¹ i górn¹ krawêdzi¹ okna
	/// </summary>
	/// <returns>true, jeœli wyst¹pi³a kolizja, w przeciwnym wypadku false</returns>
	bool isCollisionScreen();
	/// <summary>
	/// Funkcja wykrywa kolizjê pi³ki z desk¹
	/// </summary>
	/// <param name="paddle">deska</param>
	/// <returns>true, jeœli pi³ka odbi³a siê od deski, w przeciwnym wypadku false</returns>
	bool isCollisionPaddle (sf::RectangleShape paddle);
	/// <summary>
	/// Pi³ka spada i odbija siê od ró¿nych obiektów
	/// </summary>
	void BallMove();
	/// <summary>
	/// Metoda sprawdzaj¹ca, czy wspó³rzêdna y po³o¿enia pi³ki znalaz³a siê poza doln¹ krawêdzi¹ okna gry
	/// </summary>
	/// <returns>true, jeœli pi³ka wypad³a poza okno, w przeciwnym wypadku false</returns>
	bool isGameOver();
	/// <summary>
	/// Funkcja przywracj¹ca pocz¹tkowe parametry pi³ki 
	/// Ustawia pi³kê na ekranie w miejscu startu
	/// </summary>
	void Restart();
	/// <summary>
	/// Funkcja pozwalaj¹ca ustaliæ prêdkoœæ pi³ki na osi x
	/// </summary>
	/// <param name="s">prêdkoœæ pi³ki</param>
	void setSpeed(const int s);
	/// <summary>
	/// Funkcja zwracaj¹ca aktualn¹ prêdkoœæ pi³ki na osi x
	/// </summary>
	/// <returns></returns>
	int getSpeed();
	/// <summary>
	/// Funkcja ustalaj¹ca prêdkoœæ pi³ki na osi y
	/// </summary>
	/// <param name="s">prêdkoœæ pi³ki </param>
	/// <returns></returns>
	void setSpeedy(const int s);
	/// <summary>
	/// Funkcja zwracaj¹ca aktualn¹ prêdkoœæ pi³ki wzd³u¿ osi y
	/// </summary>
	/// <returns>prêdkoœæ pi³ki wzd³u¿ osi y</returns>
	int getSpeedy();

};
#endif

