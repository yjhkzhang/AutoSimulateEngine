#pragma once

#include "configuration.h"
#include "iostream"

#ifndef AS_PLATFORM_LINUX
	#error AutoSimulate now only supports Linux!
#endif

#define BIT(x) (1 << x) 
