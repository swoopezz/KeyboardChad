#include "WinSize.hpp"
#include "Window.hpp"
#include "Elements.hpp"
#include <memory>

int main() {	
	
	using namespace tui;

	Window window = Window(std::make_shared<size::FullScreen>());
	
	window.setContent({
		text("Very long mega text 42"),
		text("Second texwot six seven eight forty tfasljfalk fj;jdfdsafas "),
		text("Forty two eleven six twelve")
	});
	
	window.render();
	return 0;
}
