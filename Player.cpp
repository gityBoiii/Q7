#include "Player.h"
#include <iostream>
#include "Engine.h"

using namespace std;

APlayer::APlayer()
{
	Shape = 'P';
	ZOrder = 30;
}

APlayer::APlayer(int NewX, int NewY)
	: APlayer()
{
	X = NewX;
	Y = NewY;
}

APlayer::~APlayer()
{
}

void APlayer::Tick()
{
	switch (Engine::GetKeyCode()) 
	{
	case 'A':
	case 'a':
		X--;
		break;
	case 'W':
	case 'w':
		Y--;
		break;
	case 'S':
	case 's':
		Y++;
		break;
	case 'D':
	case 'd':
		X++;

	}

	cout << Engine::GetKeyCode() << endl;
}