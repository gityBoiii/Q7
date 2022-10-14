#include "Engine.h"
#include <conio.h>
#include "World.h"
#include <fstream>
#include "Player.h"
#include "Floor.h"
#include "Wall.h"
#include "Goal.h"

using namespace std;

int Engine::KeyCode = 0;

Engine::Engine()
{
	MyWorld = new FWorld();
}

Engine::~Engine()
{
	delete MyWorld;
}

void Engine::BeginPlay()
{
	MyWorld->BeginPlay();
}

void Engine::EndPlay()
{
	MyWorld->EndPlay();
}

void Engine::Run()
{
	BeginPlay();

	while (true)
	{
		Input();
		Tick();
		Render();
	}

	EndPlay();
}

void Engine::Load(string MapFilename)
{
	char Data[100];
	ifstream MapFile(MapFilename);

	int Y = 0;
	while (MapFile.getline(Data, 100))
	{
		for (int X = 0; X < strlen(Data); ++X)
		{
			if (Data[X] == '*')
			{
				MyWorld->SpawnActor(new AWall(X, Y));
			}
			else if (Data[X] == 'P')
			{
				MyWorld->SpawnActor(new APlayer(X, Y));
			}
			else if (Data[X] == 'G')
			{
				MyWorld->SpawnActor(new AGoal(X, Y));
			}
			else if (Data[X] == ' ')
			{
				MyWorld->SpawnActor(new AFloor(X, Y));
			}
		}
		Y++;

	}
	MapFile.close();

	// 문제 : Sort 하시오 : 뭘? ZOrder?


}

void Engine::Input()
{
	Engine::KeyCode = _getch();
}

void Engine::Tick()
{
	MyWorld->Tick();
}

void Engine::Render()
{
	MyWorld->Render();
}
