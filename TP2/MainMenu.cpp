#include "MainMenu.h"

MainMenu::MainMenu()
	: Sprite(Texture::ID::Menu)
	, text(nullptr)
{
	gEngine->GetScene("Main")->AddComponent(this);

	text = new Text("Press Enter To Play");
	text->GetBody()->SetTransform(b2Vec2(260, 300), 0.f);

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
		text->SetVisible(false);
	}
}
