
#include <Widget.hpp>
#include <string>

namespace tui {

class Input: public Widget {
private:
	const std::string hint; 

	int cursorPosition = 0;
	std::string input = "";
	bool isActive  = false;
public:
	Input(const std::string& hint) :
		 hint(hint) {};

	void render(Window& w, int& x, int& y) override;
	void press(char key);	

	const std::string& getText() const { return input; };

	~Input() {}
};
}
