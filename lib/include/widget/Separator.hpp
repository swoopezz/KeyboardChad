#pragma once

#include <Widget.hpp>
#include <string>

namespace tui {

class Separator : public Widget {
private:
	const std::string text;
public:
	Separator();
	void render(Window& w, int& x, int& y) override;
	int getWidth() override;
	int getHeight() override;
	~Separator() {}
};
}
