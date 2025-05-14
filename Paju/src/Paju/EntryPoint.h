#pragma once

#ifdef  PJ_PLATFORM_WINDOWS

extern Paju::Application* Paju::CreateApplication();

int main(int argc, char** argv) {

	auto app = Paju::CreateApplication();
	app->Run();
	delete app;
}

#endif
