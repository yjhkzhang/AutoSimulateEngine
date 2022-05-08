#pragma once

#ifdef AS_PLATFORM_LINUX

extern AutoSimulate::Application* AutoSimulate::CreateApplication();

int main(int argc, char** argv)
{
	AutoSimulate::Log::Init();
	HZ_CORE_WARN("Initialized Log!");
	int a = 5;
	HZ_INFO("Hello! Var={0}", a);

	auto app = AutoSimulate::CreateApplication();
	app->Run();
	delete app;
}

#endif