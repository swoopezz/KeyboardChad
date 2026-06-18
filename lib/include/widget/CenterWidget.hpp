#pragma once

#include "Window.hpp"
#include <Widget.hpp>

namespace tui {

class CenterWidgetX : public Widget {
private:
	const Element element;
public:
	CenterWidgetX(Element& element) : element(element) {};
	void render(Window& w, int& x, int& y) override;
	~CenterWidgetX() {}
};

class CenterWidgetY : public Widget {
private:
	const Element element;	
public:
	CenterWidgetY(Element& element) : element(element) {};
	void render(Window& w, int& x, int& y) override;
	~CenterWidgetY() {}
};
}
