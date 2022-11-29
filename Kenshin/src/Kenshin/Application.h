#pragma once
#include "Core.h"

namespace Kenshin {
	class KENSHIN_API Application
	{
	public: 
		Application();
		~Application();

		void Run();
	};

	Kenshin::Application* createApplication();
}

