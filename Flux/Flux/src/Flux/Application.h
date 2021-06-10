#pragma once

#include "Core.h"


namespace Flux
{

	class FLUX_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//to define in client
	Application* CreateApplication();

}