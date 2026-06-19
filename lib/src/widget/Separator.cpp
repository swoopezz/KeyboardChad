#include <Separator.hpp>
#include <Window.hpp>
namespace tui {
	Separator::Separator(){}; 
	void Separator::render(Window& w, int& x, int& y) {
		if (w.getHeight() > y) y++;
	}
	int Separator::getWidth() { return 0; };
	int Separator::getHeight() { return 1; };
}
