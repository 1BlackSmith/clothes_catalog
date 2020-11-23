#include "../framework.h"

cSize::cSize(int size, TCHAR* euroSize)
{
	cSize::setSize(size);
	cSize::setEuroSize(euroSize);
}

void cSize::setSize(int size)
{
	cSize::size = size;
}
void cSize::setEuroSize(TCHAR* size)
{
	cSize::euroSize = size;
}

int cSize::getSize()
{
	return cSize::size;
}
TCHAR* cSize::getEuroSize()
{
	return cSize::euroSize;
}