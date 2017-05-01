#pragma once

#include "Sprite.h"
#include "Text.h"
#include "RessourcesID.h"
#include "Scene.h"
#include "Input.h"

class MainMenu
	:  public Sprite
{
public:
	MainMenu();
	~MainMenu();
	void Update();

private:
	
	Text* text;
};

