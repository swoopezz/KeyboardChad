#include "Window.hpp"
#include <CenterWidget.hpp>

namespace tui {

	void CenterWidgetX::render(Window& w, int& x, int& y) {
		if (w.getWidth() > 0) {	
			x = (w.getWidth() - 0) / 2;
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
}	
