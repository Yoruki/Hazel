#pragma once

#include "Core.h"

namespace Hazel {

	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();//会被sandbox继承，设为虚函数

		void Run();
	};

	//To be defined in client
	Application* CreateApplication();
}



