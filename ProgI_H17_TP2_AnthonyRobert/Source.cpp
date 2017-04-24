#include "Scene.h"
#include "SpriteAnimation.h"
#include "Abadox.h"
#include "Level.h"

int main(int argc, char* args[])
{
	gEngine->Init();

	Textures->LoadTexture(Texture::ID::Boss, "2132.png");
	
	//Création des objets
	Scene* scene = new Scene("Main");
	scene->SetNativeResolution(768, 432);
	gEngine->AddScene(scene);
	

	SDL_Rect frame;
	frame.x = 96;
	frame.y = 19;
	frame.w = 25;
	frame.h = 25;

	scene->SetCameraShake(true);

	SpriteAnimation* test = new SpriteAnimation(Texture::Boss, &frame, 3);
	scene->AddComponent(test);

	Vector2D abad1pos = Vector2D(50, 50);
	float abad1rot = 45;


	Abadox* abad = new Abadox();
	abad->SetPosition(abad1pos);
	abad->SetRotation(abad1rot);
	abad->SetFlip(SDL_FLIP_HORIZONTAL);

	Abadox* abad1 = new Abadox();
	abad1->SetPosition(Vector2D(500, 0));

	scene->AddComponent(abad);
	scene->AddComponent(abad1);

	Text* text = new Text();
	scene->AddComponent(text);

	gEngine->LoadScene("Main");

	gEngine->Run();

	return 0;
}