#include "Ui.h"



Ui::Ui()
{

}


Ui::~Ui()
{
}

void Ui::SetScore()
{
	std::stringstream ss;
	int i =  000000;
	ss << i << "Score";
	
	
	text->SetText(ss.str().c_str());
}


