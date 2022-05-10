#pragma once

#include "configuration.h"
#include "iostream"

#ifndef AS_PLATFORM_LINUX
	#error AutoSimulate now only supports Linux!
#endif

#define BIT(x) (1 << x) 
#define HZ_BIND_EVENT_FN(fn) std::bind(&fn, this, std::placeholders::_1)
