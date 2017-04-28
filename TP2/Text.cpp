#include "Text.h"



Text::Text()
{
	//this opens a font style and sets a size
	TTF_Font* Sans = TTF_OpenFont("PressStart2P.ttf", 24);
	//Color using 0 to 255
	SDL_Color White = { 255, 255, 255 };
	//create the surface first for SDL_Surface
	SDL_Surface* surfaceMessage =
		TTF_RenderText_Solid(Sans, "Push Enter Key", White);
	//convert to texture
	SetTexture(SDL_CreateTextureFromSurface(gEngine->GetRenderer(), surfaceMessage));
}


Text::~Text()
{
}
