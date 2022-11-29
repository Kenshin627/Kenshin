#pragma once
#include "Application.h"
#include <iostream>

#ifdef KS_PLATFORM_WINDOWS
extern Kenshin::Application* Kenshin::createApplication();

int main(int argc, char** argv)
{
	std::cout << "Engine start!" << std::endl;
	Kenshin::Application* app = Kenshin::createApplication();
	app->Run();
	delete app;
}
#endif