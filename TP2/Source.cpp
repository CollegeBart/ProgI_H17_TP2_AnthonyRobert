#include "Scene.h"
#include "SpriteAnimation.h"
#include "Abadox.h"
#include "Level.h"
#include "Text.h"
#include "Sprite.h"
#include "MainMenu.h"


int main(int argc, char* args[])
{
	gEngine->Init(511,463);
	//gEngine->SetNativeResolution(768, 432);

	Textures->LoadTexture(Texture::ID::Boss1, "2133.png");
	Textures->LoadTexture(Texture::ID::Boss2, "2132.png");
	Textures->LoadTexture(Texture::ID::Boss3, "2134.png");
	Textures->LoadTexture(Texture::ID::Ennemy, "19355.png");
	Textures->LoadTexture(Texture::ID::Player, "32877.png");
	Textures->LoadTexture(Texture::ID::Menu, "36517_01.png");
	Textures->LoadTexture(Texture::ID::Bg, "Background.png");


	//Création des objets
	Scene* scene = new Scene("Main");
	gEngine->AddScene(scene);
	

	SDL_Rect frame;
	frame.x = 1;
	frame.y = 1;
	frame.w = 145;
	frame.h = 241;

	SDL_Rect framemenu;
	framemenu.x = 0;
	framemenu.y = 0;
	framemenu.h = 463;
	framemenu.w = 511;

	scene->SetCameraShake(true);
	MainMenu* menu = new MainMenu();

	//SpriteAnimation* test = new SpriteAnimation(Texture::Boss1, &frame, 4);
	//scene->AddComponent(test);
	
	
	//Vector2D abad1pos = Vector2D(50, 50);
	//float abad1rot = 45;


	//Abadox* abad = new Abadox();
	////abad->SetPosition(abad1pos);
	////abad->SetRotation(abad1rot);
	//abad->SetFlip(SDL_FLIP_HORIZONTAL);
	//
	//Abadox* abad1 = new Abadox();
	//abad1->SetPosition(Vector2D(500, 0));

	//scene->AddComponent(abad);
	//scene->AddComponent(abad1);

	
	gEngine->LoadScene("Main");

	gEngine->Run();

	return 0;
}