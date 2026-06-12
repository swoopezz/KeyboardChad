#include "Elements.hpp"
#include "WinSize.hpp"
#include "Window.hpp"
#include "Util.hpp"
#include "Input.hpp"
#include <memory>

int main() {	
	
	using namespace tui;

	Window window = Window(std::make_shared<size::FullScreen>());
	const std::string generated = 
		"make each through begin buttom but think encrease live";
	
	auto input = std::make_shared<Input>(generated);

	window.setContent({
		centerX(text("KeyboardChad")),
	
		centerY(input),

		buttom(centerX(text("[esc] exit    [enter] restart")))
	});
	char key;

	util::enableAlterScr();
	util::hideCursor();
	
	while (true) {
		window.render();
		
		key = util::getch();
		if (key == 27) {
			util::disablAnterScr();
			util::showCursor();
			break;
		}
		input->press(window, key);
	}
	return 0;
}
