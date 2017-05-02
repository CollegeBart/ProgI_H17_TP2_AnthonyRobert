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
	
	
}

Level::~Level()
{
}
