#pragma once
#include "Engine.h"



class MyEngine : public Engine
{
public:
	MyEngine();
	virtual ~MyEngine();


	virtual void Initialize() override;
	virtual void Terminalize() override;

};

