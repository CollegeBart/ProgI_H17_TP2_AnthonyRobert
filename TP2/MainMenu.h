#pragma once

#include "Sprite.h"
#include "Text.h"
#include "RessourcesID.h"
#include "Text.h"
#include "Scene.h"
#include "Input.h"
#include "SpriteAnimation.h"

class MainMenu
	:  public Sprite
{
public:
	MainMenu();
	~MainMenu();
	void Update();
};

