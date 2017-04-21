#include "Scene.h"
#include "Abadox.h"
#include "Level.h"

int main(int argc, char* args[])
{
	gEngine->Init();
	//Création des objets
	Scene* scene = new Scene("Main");
	gEngine->AddScene(scene);

	Textures->LoadTexture(Texture::ID::Boss, "2132.png");

	Abadox* abad = new Abadox();
	abad->SetScale(1, 1);
	scene->AddComponent(abad);

	gEngine->LoadScene("Main");

	gEngine->Run();

	return 0;
}