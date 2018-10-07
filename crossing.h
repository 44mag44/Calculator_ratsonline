#ifndef CROSSING_H
#define CROSSING_H

#include <iostream>
using namespace std;

/*--------------------------------------------------------------------*/

class Crossing
{
private:
	int sumdevil16;		// ������ ��� 16 �������
	int sumdevil18;		// ������ ��� 18 �������
	int sumdevil19;		// ������ ��� 19 �������
	int sumdevil20;		// ������ ��� 20 �������
	int sumdevilmax;	// ������ ��� ����.�������
	int sumvampire21;	// ������ ��� ������� 21 ������
	int sumvampire22;	// ������ ��� ������� 22 ������
	int sumvampire23;	// ������ ��� ������� 23 ������	
	int sumvampire24;	// ������ ��� ������� 24 ������
	int sumvampire25;	// ������ ��� ������� 25 ������
	int sumvampiremax;	// ������ ��� ����.�������
	int sumjoker;		// ������ ��� ������� �������
public:
	Crossing ();

	void inputdata();	// ����� ����������

	void silica_7();	// ������
	void freeday_7();	// �������� ����

	void silica_8();	// ������ + �����
	void freeday_8();	// �������� ����
};

#endif
