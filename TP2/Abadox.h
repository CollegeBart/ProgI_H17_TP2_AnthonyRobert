#pragma once

#include "Sprite.h"
#include "RessourcesID.h"

#define ABADOX_PATH "2131.png"

class Abadox :
	public Sprite
{
public: 
	void Update();

	Abadox();
	~Abadox() {}
private:
	float speed;
};



// ouais mais faut jsois capable d'appuyer sur enter pour le setter a off pi mettre le reste dla game
///etc
