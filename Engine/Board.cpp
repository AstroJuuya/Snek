#include "Board.h"
#include <assert.h>

Board::Board(Graphics& gfx)
	:
	gfx( gfx )
{
}

void Board::DrawCell(const Location& loc, Color c)
{
	assert(loc.x >= 0);
	assert(loc.x <= width);
	assert(loc.y >= 0);
	assert(loc.y <= height);
	gfx.DrawRectDim(
		loc.x * dimension + dimension + padding, 
		loc.y * dimension + dimension + padding, 
		dimension - padding, 
		dimension - padding, c);
}

void Board::DrawBoard(const Color c)
{
	for (int i = 1; i <= width; i++)
	{
		for (int j = 1; j <= height; j++)
		{
			gfx.DrawRectDim(i * dimension + padding, j * dimension + padding, dimension - padding, dimension - padding, c);
		}
	}
}

void Board::DrawBorder(const Color c)
{
	// Top "hanging over" on the side end
	gfx.DrawRect(
		dimension - borderWidth, 
		dimension - borderWidth,
		dimension * (width + 1) + borderWidth + padding,
		dimension, c);
	// Bottom "hanging over" on the side end
	gfx.DrawRect(
		dimension - borderWidth,
		dimension * (height + 1) + padding,
		dimension * (width + 1) + borderWidth + padding,
		dimension * (height + 1) + borderWidth + padding, c);
	// Left
	gfx.DrawRect(
		dimension - borderWidth,
		dimension,
		dimension,
		dimension * (height + 1) + padding, c);
	// Right
	gfx.DrawRect(
		dimension * (width + 1) + padding,
		dimension,
		dimension * (width + 1) + borderWidth + padding,
		dimension * (height + 1) + padding, c);
}

int Board::GetGridWidth() const
{
	return width;
}

int Board::GetGridHeight() const
{
	return height;
}

bool Board::IsInsideBoard(const Location& loc) const
{
	return loc.x >= 0 && loc.x < width &&
		loc.y >=0 && loc.y < height;
}
