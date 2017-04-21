#pragma once

#include "Sprite.h"

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