#pragma once

#include "Sprite.h"

#define ABADOX_PATH "BossEyeClingTent.png"

class Abadox :
	public Sprite
{
public: 
	void Start();
	void Update();

	Abadox();
	~Abadox();
};