#include "MainMenu.h"



MainMenu::MainMenu()
	: Sprite(Texture::ID::Menu)
{
	

}


MainMenu::~MainMenu()
{
}

void MainMenu::Update()
{
	SDL_Rect frame;
	frame.x = 0;
	frame.y = 0;
	frame.h = 463;
	frame.w = 511;



	SpriteAnimation* menu = new SpriteAnimation(Texture::Menu, &frame, 1);


	if (SDL_SCANCODE_EXECUTE)
	{
		menu->SetVisible(false);
	}
}
