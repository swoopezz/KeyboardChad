#include "Window.hpp"
#include <CenterWidget.hpp>

namespace tui {

	void CenterWidgetX::render(Window& w, int& x, int& y) {
		if (w.getWidth() > element->getWidth()) {	
			x = (w.getWidth() - element->getWidth()) / 2;
			element->render(w, x, y);
		} else {
			x = 0;
			element->render(w, x, y);
		}
	}

	void CenterWidgetY::render(Window& w, int& x, int& y) {
		if (y < w.getHeight() / 2) 
			y = w.getHeight() / 2;
		else 
			y = y + (w.getHeight() / y) - 1;
			
		element->render(w, x, y);
	}

	int CenterWidgetX::getWidth() { return element->getWidth(); }
	int CenterWidgetX::getHeight() { return element->getHeight(); }

	int CenterWidgetY::getWidth() { return element->getWidth(); }
	int CenterWidgetY::getHeight() { return element->getHeight(); }
}	
