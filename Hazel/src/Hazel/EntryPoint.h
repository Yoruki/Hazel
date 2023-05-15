#pragma once

//返回Hazel Application，CreateApplication是在客户端实现的
extern Hazel::Application* Hazel::CreateApplication();

//用来创建Hazel Application应用
#ifdef HZ_PLATFORM_WINDOWS

int main(int argc, char **argv) {
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif