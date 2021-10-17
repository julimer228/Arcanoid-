#ifndef BALL_H
#define BALL_H
#include "Settings.h"
/// <summary>
/// Klasa reprezentuj�ca pi�k�
/// </summary>
class Ball:public sf::CircleShape
{
private:
	/// <summary>
	/// Promie� pi�ki
	/// </summary>
	unsigned int radious;
	/// <summary>
	/// Aktualna pr�dko�� pi�ki
	/// </summary>
	int speed;
	/// <summary>
	/// Aktualny k�t pr�dko�ci pi�ki z osi� x
	/// </summary>
	int angle;
	/// <summary>
	/// Pr�dko�� pi�ki na osi y
	/// </summary>
	int speed_y;

public:
	/// <summary>
	/// Konstruktor domy�lny
	/// Tworzy pi�k� o okre�lonym rozmiarze
	/// </summary>
	Ball();
	/// <summary>
	/// Metoda sprawdzaj�ca, czy wyst�pi�a kolizja pi�ki z obiektem typu
	/// RectangleShape
	/// </summary>
	/// <param name="rect">obiekt z kt�rym mog�a wyst�pi� kolizja</param>
	/// <returns></returns>
	bool isCollision(sf::RectangleShape block);
	/// <summary>
	/// Funkcja wykrywaj�ca kolizj� pi�ki z lew�, praw� i g�rn� kraw�dzi� okna
	/// </summary>
	/// <returns>true, je�li wyst�pi�a kolizja, w przeciwnym wypadku false</returns>
	bool isCollisionScreen();
	/// <summary>
	/// Funkcja wykrywa kolizj� pi�ki z desk�
	/// </summary>
	/// <param name="paddle">deska</param>
	/// <returns>true, je�li pi�ka odbi�a si� od deski, w przeciwnym wypadku false</returns>
	bool isCollisionPaddle (sf::RectangleShape paddle);
	/// <summary>
	/// Pi�ka spada i odbija si� od r�nych obiekt�w
	/// </summary>
	void BallMove();
	/// <summary>
	/// Metoda sprawdzaj�ca, czy wsp�rz�dna y po�o�enia pi�ki znalaz�a si� poza doln� kraw�dzi� okna gry
	/// </summary>
	/// <returns>true, je�li pi�ka wypad�a poza okno, w przeciwnym wypadku false</returns>
	bool isGameOver();
	/// <summary>
	/// Funkcja przywracj�ca pocz�tkowe parametry pi�ki 
	/// Ustawia pi�k� na ekranie w miejscu startu
	/// </summary>
	void Restart();
	/// <summary>
	/// Funkcja pozwalaj�ca ustali� pr�dko�� pi�ki na osi x
	/// </summary>
	/// <param name="s">pr�dko�� pi�ki</param>
	void setSpeed(const int s);
	/// <summary>
	/// Funkcja zwracaj�ca aktualn� pr�dko�� pi�ki na osi x
	/// </summary>
	/// <returns></returns>
	int getSpeed();
	/// <summary>
	/// Funkcja ustalaj�ca pr�dko�� pi�ki na osi y
	/// </summary>
	/// <param name="s">pr�dko�� pi�ki </param>
	/// <returns></returns>
	void setSpeedy(const int s);
	/// <summary>
	/// Funkcja zwracaj�ca aktualn� pr�dko�� pi�ki wzd�u� osi y
	/// </summary>
	/// <returns>pr�dko�� pi�ki wzd�u� osi y</returns>
	int getSpeedy();

};
#endif

