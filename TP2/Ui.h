#pragma once
#include "Text.h"

class Ui
	:public Text
{
public:
	Ui();
	~Ui();
	void SetScore();
	

private:

	Text* text;
};

