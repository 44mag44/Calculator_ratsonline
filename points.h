// �������� ����� ���-�� �����
#ifndef POINTS_H
#define POINTS_H

#include <iostream>
using namespace std;

class Point
{
private:
	int point;	// ����
	int rats;	// �����
	int sum;	// ������ ��������� 
public:
	Point();	// ����������
	
	void cininfo(int&, int&);	// ���� ���-�� ����� ������ � ����

	void count();				// ������� 
	void show();				// ������� ���� �� �����	
};

#endif
