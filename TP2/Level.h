#pragma once

#include "Sprite.h"
#include "RessourcesID.h"

#define LEVEL_PATH

class Level :
	public Sprite
{
public:
	void Start();
	void Update();

	Level();
	~Level();

};