#include "Scene.h"
#include "Abadox.h"
#include "Level.h"

int main(int argc, char* args[])
{
	gEngine->Init();
	//Création des objets
	Scene* scene = new Scene("Main");
	gEngine->AddScene(scene);

	Abadox* abad = new Abadox();
	
	gEngine->GetScene("Main")->AddComponent(abad);




	gEngine->AddScene(scene);

	gEngine->LoadScene("Main");

	gEngine->Run();

	return 0;
}