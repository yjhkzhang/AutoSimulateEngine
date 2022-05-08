#pragma once

#ifdef AS_PLATFORM_LINUX

extern AutoSimulate::Application* AutoSimulate::CreateApplication();

int main(int argc, char** argv)
{
	auto app = AutoSimulate::CreateApplication();
	app->Run();
	delete app;
}

#endif