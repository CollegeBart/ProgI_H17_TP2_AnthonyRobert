#include "Ennemy.h"



Ennemy::Ennemy()
{
}

Ennemy::Ennemy(Ui * ui)
	: ui(ui)
{
	std::stringstream pnt;
	int i = 100;
	pnt << i << "Point";
	ui->SetText(pnt.str().c_str());
}


Ennemy::~Ennemy()
{
}
