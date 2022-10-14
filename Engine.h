#pragma once
#include <string>

using namespace std;

class FWorld;

//추상 클래스
class Engine
{
public:
	Engine();
	virtual ~Engine();

	virtual void BeginPlay();

	virtual void EndPlay();

	//순수 가상 함수
	virtual void Initialize() = 0;
	virtual void Terminalize() = 0;

	void Run();

	inline static int GetKeyCode()
	{
		return KeyCode;
	}

protected:

	virtual void Input();
	virtual void Tick();
	virtual void Render();

	void Load(string MapFilename);

	FWorld* MyWorld;

	static int KeyCode;
};