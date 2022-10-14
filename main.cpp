#include <iostream>
#include <fstream>
#include "MyEngine.h"


class StaticClass
{
public:
	static int Count;

	//static void Add()
	//{
	//	//Help = 10;
	//}

	StaticClass()
	{
		Count++;
	}

	~StaticClass()
	{
		Count--;
	}

};

int StaticClass::Count = 0;

int main()
{
	MyEngine* E = new MyEngine();

	E->Initialize();

	E->Run();

	E->Terminalize();

	
	return 0;
}