#pragma once

#include "Graphics.h"
#include "Location.h"

class Board
{
public:
	Board(Graphics& gfx);
	void DrawCell(const Location& loc, Color c);
	void DrawBoard(const Color c);
	void DrawBorder(const Color c);
	int GetGridWidth() const;
	int GetGridHeight() const;
	bool IsInsideBoard(const Location& loc) const;
private:
	Graphics& gfx;
	static constexpr int dimension = 20;
	static constexpr int width = Graphics::ScreenWidth / dimension - 2;
	static constexpr int height = Graphics::ScreenHeight / dimension - 2;
	static constexpr int borderWidth = 5;
	static constexpr int padding = 1;
};