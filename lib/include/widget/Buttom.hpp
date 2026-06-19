#pragma once

#include <Widget.hpp>

namespace tui {

class Buttom : public Widget {
private:
	Element element;
public:
	Buttom(Element& elem);
	void render(Window& w, int& x, int& y) override;
	int getWidth() override;
	int getHeight() override;
	~Buttom() {}
};
}
