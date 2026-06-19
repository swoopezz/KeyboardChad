#include "Elements.hpp"
#include <Input.hpp>
#include "Keys.hpp"
#include "Window.hpp"
#include "Util.hpp"
#include <memory>

using namespace tui;
int main() {	
	
	auto window = Window(std::make_shared<size::FullScreen>());
	auto input = std::make_shared<Input>("please enter the text");
	window.setContent({
		input | centerX | centerY
	});
	
	util::enableAlterScr();
	util::hideCursor();
	while (true) {
		window.render();
		char ch = util::getch();

		if (ch == Key::ESC) {
			util::disablAnterScr();
			util::showCursor();
			break;
		}
		input->press(ch);
	}
	return 0;
}

