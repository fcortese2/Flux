#pragma once

#ifdef FX_PLATFORM_WINDOWS

extern Flux::Application* Flux::CreateApplication();

//code that runs at entry
int main(int argc, char** argv)
{
	auto app = Flux::CreateApplication();
	app->Run();
	delete app;
}

#endif // HZ_PLATFORM_WINDOWS
