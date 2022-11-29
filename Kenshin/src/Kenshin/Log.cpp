#include "Log.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Kenshin {
	std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

	void Log::init()
	{
		spdlog::set_pattern("%^[%T] %n: %v%$");
		s_CoreLogger = spdlog::stdout_color_mt("KENSHIN");
		s_ClientLogger = spdlog::stdout_color_mt("APP");
	}
}