#pragma once

#ifdef E_PLATFORM_WINDOWS

extern Engine::Application* Engine::CreateApplication();

int main(int argc, char** argv) 
{
	Engine::Log::Init();//日志初始化

	E_CORE_WARN("Engine Init!");//打印日志
	E_INFO("Hello!");

	auto app = Engine::CreateApplication();
	app->Run();
	delete app;
	return 0;
}

#endif
