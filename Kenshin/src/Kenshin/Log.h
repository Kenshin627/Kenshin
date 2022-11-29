#pragma once

#include <memory>
#include <spdlog/spdlog.h>
#include "Core.h"

namespace Kenshin {
	class KENSHIN_API Log
	{
	public:
		static void init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; };
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; };
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

//Core log macros
#define KS_CORE_TRACE(...)   ::Kenshin::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define KS_CORE_INFO(...)    ::Kenshin::Log::GetCoreLogger()->info(__VA_ARGS__)
#define KS_CORE_WARN(...)    ::Kenshin::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define KS_CORE_ERROR(...)   ::Kenshin::Log::GetCoreLogger()->error(__VA_ARGS__)
#define KS_CORE_FATAL(...)   ::Kenshin::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client log macros
#define KS_TRACE(...)        ::Kenshin::Log::GetClientLogger()->trace(__VA_ARGS__)
#define KS_INFO(...)         ::Kenshin::Log::GetClientLogger()->info(__VA_ARGS__)
#define KS_WARN(...)         ::Kenshin::Log::GetClientLogger()->warn(__VA_ARGS__)
#define KS_ERROR(...)        ::Kenshin::Log::GetClientLogger()->error(__VA_ARGS__)
#define KS_FATAL(...)        ::Kenshin::Log::GetClientLogger()->fatal(__VA_ARGS__)
