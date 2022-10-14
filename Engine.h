#pragma once
#include <string>

using namespace std;

class FWorld;

//�߻� Ŭ����
class Engine
{
public:
	Engine();
	virtual ~Engine();

	virtual void BeginPlay();

	virtual void EndPlay();

	//���� ���� �Լ�
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