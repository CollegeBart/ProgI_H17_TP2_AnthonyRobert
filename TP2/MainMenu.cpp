#include "MainMenu.h"

MainMenu::MainMenu()
	: Sprite(Texture::ID::Menu)
{
	text = new Text();
	gEngine->GetScene("Main")->AddComponent(text);
}


MainMenu::~MainMenu()
{
}

void MainMenu::Update()
{
	if ( gInput->IsKeyPressed(SDL_SCANCODE_RETURN))
	{
		SetVisible(false);
	}
}
