#include "Scene.h"
#include "SpriteAnimation.h"
#include "Abadox.h"
#include "Level.h"


int main(int argc, char* args[])
{
	gEngine->Init();
	gEngine->SetNativeResolution(255, 240);

	Textures->LoadTexture(Texture::ID::Boss, "2133.png");
	
	//Création des objets
	Scene* scene = new Scene("Main");
	gEngine->AddScene(scene);

	SDL_Rect frame;
	frame.x = 2;
	frame.y = 2;
	frame.w = 142;
	frame.h = 239;

	scene->SetCameraShake(true);

	SpriteAnimation* test = new SpriteAnimation(Texture::Boss, &frame, 4);
	scene->AddComponent(test);

	//Vector2D abad1pos = Vector2D(50, 50);
	//float abad1rot = 45;
	


	//Abadox* abad = new Abadox();
	//abad->SetFlip(SDL_FLIP_HORIZONTAL);
	//scene->AddComponent(abad);

	//Abadox* abad1 = new Abadox();
	//scene->AddComponent(abad1);

	//Text* text = new Text();
	//scene->AddComponent(text);

	gEngine->LoadScene("Main");

	gEngine->Run();

	return 0;
}