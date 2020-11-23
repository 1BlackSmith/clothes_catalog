#pragma once

/**
  Размер одежды
  задается соответствием числового типа размера еропейскому типу размера
 */
class cSize {
private:
	int size;
	TCHAR* euroSize;
public:
	cSize(int, TCHAR*);

	void setSize(int);
	void setEuroSize(TCHAR*);

	int getSize();
	TCHAR* getEuroSize();
};