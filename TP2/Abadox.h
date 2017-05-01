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
	~Abadox();
private:
	float speed;
};