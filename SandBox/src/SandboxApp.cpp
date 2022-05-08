#include "AutoSimulate.h"

class SandBox : public AutoSimulate::Application
{
public:
	SandBox()
	{

	}

	~SandBox()
	{

	}

};

AutoSimulate::Application* AutoSimulate::CreateApplication()
{
	return new SandBox();
}