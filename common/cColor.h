#pragma once

/**
  ÷вет одежды
 */
class cColor {
private:
	COLORREF color;
	TCHAR* name;
public:
	cColor(COLORREF);
	cColor(COLORREF, TCHAR*);
	cColor(int, int, int);
	cColor(int, int, int, TCHAR*);

	void setColor(COLORREF);
	void setColor(int, int, int);
	COLORREF getColor();

	void setName(TCHAR*);
	TCHAR* getName();

	COLORREF rgbToColor(int, int, int);
};