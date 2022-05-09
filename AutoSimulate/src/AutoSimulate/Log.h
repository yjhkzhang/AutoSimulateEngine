#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace AutoSimulate {

	class Log
	{
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core log macros
#define HZ_CORE_TRACE(...)    ::AutoSimulate::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define HZ_CORE_INFO(...)     ::AutoSimulate::Log::GetCoreLogger()->info(__VA_ARGS__)
#define HZ_CORE_WARN(...)     ::AutoSimulate::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define HZ_CORE_ERROR(...)    ::AutoSimulate::Log::GetCoreLogger()->error(__VA_ARGS__)
#define HZ_CORE_FATAL(...)    ::AutoSimulate::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define HZ_TRACE(...)	      ::AutoSimulate::Log::GetClientLogger()->trace(__VA_ARGS__)
#define HZ_INFO(...)	      ::AutoSimulate::Log::GetClientLogger()->info(__VA_ARGS__)
#define HZ_WARN(...)	      ::AutoSimulate::Log::GetClientLogger()->warn(__VA_ARGS__)
#define HZ_ERROR(...)	      ::AutoSimulate::Log::GetClientLogger()->error(__VA_ARGS__)
#define HZ_FATAL(...)	      ::AutoSimulate::Log::GetClientLogger()->fatal(__VA_ARGS__) 