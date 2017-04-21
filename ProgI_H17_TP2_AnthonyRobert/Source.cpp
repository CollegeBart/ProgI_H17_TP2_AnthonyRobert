#include "Scene.h"
#include "Sprite.h"

int main(int argc, char* args[])
{
	gEngine->Init();
	//Cr�ation des objets
	Scene* scene = new Scene("Main");


	Sprite* s = new Sprite("2131.png");
	scene->AddComponent(s);

	gEngine->AddScene(scene);

	gEngine->LoadScene("Main");

	gEngine->Run();

	return 0;
}