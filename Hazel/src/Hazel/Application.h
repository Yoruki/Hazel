#pragma once

#include "Core.h"

namespace Hazel {

	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();//�ᱻsandbox�̳У���Ϊ�麯��

		void Run();
	};

	//To be defined in client
	Application* CreateApplication();
}



