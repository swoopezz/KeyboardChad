
#pragma once

namespace tui::util {
	char getch();
	void enableAlterScr();
	void disablAnterScr();
	void hideCursor();
	void showCursor();
	void clearScreen();
    void moveCursor(int x, int y);
}
