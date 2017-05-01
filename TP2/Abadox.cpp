#include "Abadox.h"

Abadox::Abadox()
	: Sprite(Texture::ID::Boss)
	, speed(100.0f)
{
	CreateCollider(ColliderType::SQUARE_COLLIDER, dstRect->w, dstRect->h, 0.0f);

}

Abadox::~Abadox()
{
}

void Abadox::Update()
{
	body->SetTransform(
		body->GetPosition() + (b2Vec2(speed * deltaTime, 0)),
		body->GetAngle());
}
