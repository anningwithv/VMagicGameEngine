#pragma once

#ifdef E_PLATFORM_WINDOWS

extern Engine::Application* Engine::CreateApplication();

int main(int argc, char** argv) 
{
	Engine::Log::Init();//��־��ʼ��

	E_CORE_WARN("Engine Init!");//��ӡ��־
	E_INFO("Hello!");

	auto app = Engine::CreateApplication();
	app->Run();
	delete app;
	return 0;
}

#endif
