#pragma once

#include "Graphics.h"
#include "SpriteCodex.h"

class Menu
{
public:
	Menu(Graphics& gfx);
	void DrawMenu();
	void DrawGameover();
	bool IsOpen = true;
private:
	Graphics& gfx;
};