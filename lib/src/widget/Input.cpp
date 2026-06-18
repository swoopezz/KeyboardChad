#include <Window.hpp>
#include <Input.hpp>

namespace tui {
	void Input::render(Window& w, int& x, int& y) {
		if (!isActive) return;
	}

	void Input::press(char key) {
		input += key;
	}
}
