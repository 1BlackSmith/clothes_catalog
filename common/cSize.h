#pragma once

/**
  ������ ������
  �������� ������������� ��������� ���� ������� ����������� ���� �������
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