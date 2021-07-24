#include "Menu.h"

Menu::Menu(Graphics& gfx)
	:
	gfx(gfx)
{
}

void Menu::DrawMenu()
{
	SpriteCodex::DrawTitle(gfx.ScreenWidth / 2 - 107, gfx.ScreenHeight / 2 - 80, gfx);
}

void Menu::DrawGameover()
{
	SpriteCodex::DrawGameOver(gfx.ScreenWidth / 2 - 42, gfx.ScreenHeight / 2 - 32, gfx);
}
