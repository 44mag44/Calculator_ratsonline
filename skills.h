/* 
	����������� ������� ������������ ������ ��� ��������� �����                
*/
#ifndef SKILLS_H
#define SKILLS_H

#include <iostream>
#include <fstream>

using namespace std;

class Skills
{
private:
	int point;			// ���� ������ ��� ����� �����
	int rats;			// ���� ���-�� ����
	int result;			// ���-�� ����� ������
	int sumpoints;		// �����	
	int armor;			// ����� ������
	int skills;			// ����� ���������/�����			
	int sumarmor;		// ��������� ������
	int sumskills;		// ��������� ���������/������
	int salesumpoints;	// ����� ����� ������ (�����)
	int salearmor;		// ����� ������ (�����)
	int salesumarmor;	// ��������� ������ (�����)
	int saleskills;		// ����� ���������/����� (�����)			
	int salesumskills;	// ��������� ���������/������ (�����)	
	
	fstream fout;		// ����� � ����
public:
	Skills();
	// Cin
	int  cininfo();
	bool inputdata();

	// � 4 ������
	void four_skills(); 			//���� � 4 ������
	void four_skills_discount(); 	//���� � 4 ������ ������ �� ������
	void show_four();				//�������� - 4 ������
	void show_four_discount();		//�������� - ������ �� ������

	// ��������������
	void alternative(); 				//���� ��������������
	void alternative_discount(); 		//���� ������. ������ �� ������
	void show_alternative();			//�������� - ������.
	void show_alternative_discount();	//�������� - ������. ������ �� ������
};
#endif
