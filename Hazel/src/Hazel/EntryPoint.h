#pragma once

//����Hazel Application��CreateApplication���ڿͻ���ʵ�ֵ�
extern Hazel::Application* Hazel::CreateApplication();

//��������Hazel ApplicationӦ��
#ifdef HZ_PLATFORM_WINDOWS

int main(int argc, char **argv) {
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif