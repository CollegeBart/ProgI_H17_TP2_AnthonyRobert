#include "Level.h"

void Level::Start()
{
	
}

void Level::Update()
{
}

Level::Level()
	:Sprite(Texture::ID::Bg)
	, text(nullptr)
{
	gEngine->GetScene("Main")->AddComponent(this);
	
	int i = 00000000;
	text = new Text();

	gEngine->GetScene("Main")->AddComponent(text);

}

Level::~Level()
{
}
