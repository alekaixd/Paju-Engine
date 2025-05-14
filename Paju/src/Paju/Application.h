#pragma once

#include "Core.h"

namespace Paju {
	class PAJU_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// to be defined in client
	Application* CreateApplication();

}