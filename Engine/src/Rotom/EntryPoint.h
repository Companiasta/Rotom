#pragma once

#ifdef RTM_PLATFORM_WINDOWS

extern Rotom::Application* Rotom::CreateApplication();

int main(int argc, char* argv[])
{
	auto app = Rotom::CreateApplication();
	app->Run();
	delete app;
}
#endif // RTM_PLATFORM_WINDOWS
