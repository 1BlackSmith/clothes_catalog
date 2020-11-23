#include "../framework.h"

cColor::cColor(COLORREF color)
{
	cColor::setColor(color);

	TCHAR name[] = _T("");
	cColor::setName(name);
}
cColor::cColor(COLORREF color, TCHAR* name)
{
	cColor::setColor(color);
	cColor::setName(name);
}
cColor::cColor(int red, int green, int blue)
{
	cColor::setColor(red, green, blue);

	TCHAR name[] = _T("");
	cColor::setName(name);
}
cColor::cColor(int red, int green, int blue, TCHAR* name)
{
	COLORREF color = cColor::rgbToColor(red, green, blue);
	cColor::setColor(red, green, blue);
	cColor::setName(name);
}

void cColor::setColor(COLORREF color)
{
	cColor::color = color;
}
void cColor::setColor(int red, int green, int blue)
{
	cColor::color = cColor::rgbToColor(red, green, blue);
}
COLORREF cColor::getColor()
{
	return cColor::color;
}

void cColor::setName(TCHAR* name)
{
	cColor::name = name;
}
TCHAR* cColor::getName()
{
	return cColor::name;
}

COLORREF cColor::rgbToColor(int red, int green, int blue)
{
	return RGB(red, green, blue);
}