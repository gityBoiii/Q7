#include "Wall.h"

AWall::AWall()
{
	Shape = '*';
	ZOrder = 20;
}

AWall::AWall(int NewX, int NewY)
	: AWall()
{
	X = NewX;
	Y = NewY;
}

AWall::~AWall()
{
}

