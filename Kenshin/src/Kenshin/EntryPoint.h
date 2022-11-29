#pragma once

#ifdef KS_PLATFORM_WINDOWS

extern Kenshin::Application* Kenshin::createApplication();

int main(int argc, char** argv)
{
	Kenshin::Log::init();
	KS_CORE_INFO("Engine start!");
	Kenshin::Application* app = Kenshin::createApplication();
	app->Run();
	delete app;
}

#endif