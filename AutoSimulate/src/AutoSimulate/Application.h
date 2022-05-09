#pragma once

#include "Core.h"
#include <memory>
#include "Window.h"

namespace AutoSimulate {
	class Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	private:
		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
	};
	// To be defined in CLIENT
	Application* CreateApplication();
}
