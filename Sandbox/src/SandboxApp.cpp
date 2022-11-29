#include "Kenshin.h"

class Sandbox : public Kenshin::Application
{
public:
	Sandbox()
	{
		
	}
	~Sandbox()
	{
	
	}
};

Kenshin::Application* Kenshin::createApplication()
{
	return new Sandbox();
}