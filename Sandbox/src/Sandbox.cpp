#include <Paju.h>

class Sandbox : public Paju::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Paju::Application* Paju::CreateApplication() {
	return new Sandbox();
}