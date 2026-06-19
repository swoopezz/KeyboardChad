#include <Buttom.hpp>
#include <Window.hpp>

namespace tui {

	Buttom::Buttom(Element& element) : element(element) {}

	void Buttom::render(Window& w, int& x, int& y) {
		y = w.getHeight() - 1;
		element->render(w, x, y);
	}

	int Buttom::getWidth() {
		return element->getWidth();
	}

	int Buttom::getHeight() {
		return element->getHeight();
	}
}
