#pragma once

#include "Sprite.h"
#include "RessourcesID.h"
#include "Text.h"

#define LEVEL_PATH

class Level :
	public Sprite
{
public:
	void Start();
	void Update();

	Level();
	~Level();

private :
	Text* text;
};