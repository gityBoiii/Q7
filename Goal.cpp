#include "Goal.h"

AGoal::AGoal()
{
	Shape = 'G';
}

AGoal::AGoal(int NewX, int NewY)
	: AGoal()
{
	X = NewX;
	Y = NewY;
}

AGoal::~AGoal()
{
}