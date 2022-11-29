#include "Kenshin.h"

class Sandbox : public Kenshin::Application
{
public:
	Sandbox()
	{
		std::cout << "Sandbox start!" << std::endl;
	}
	~Sandbox()
	{
	
	}
};

Kenshin::Application* Kenshin::createApplication()
{
	return new Sandbox();
}