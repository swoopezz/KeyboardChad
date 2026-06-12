#pragma once

namespace tui {
struct Pixel {
	char pixelContent = ' ';
	bool isBold   = false;
	bool isItal   = false;
	bool isInvert = false;
	bool isUnderl = false;
	bool isStrike = false;

	Pixel() = default;
	Pixel(const char content) : pixelContent(content) {}	
};
} // namespace
