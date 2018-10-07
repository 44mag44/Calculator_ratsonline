#ifndef SKILLS_CPP
#define SKILLS_CPP

#include "skills.h"

////////////////////////////////////////////////////////////////////////////////
/*									�����������								  */
////////////////////////////////////////////////////////////////////////////////
Skills::Skills()
{
	point			= 0;	// ���� ������ ��� ����� �����
	rats			= 0;	// ���� ���-�� ����
	result			= 0;	// ���-�� ����� ������
	sumpoints		= 0;	// ����� ����� ������	
	armor			= 0;	// ����� ������
	skills			= 0;	// ����� ���������/�����			
	sumarmor		= 0;	// ��������� ������
	sumskills		= 0;	// ��������� ���������/������
	salesumpoints	= 0;	// ����� ����� ������ (�����)
	salearmor		= 0;	// ����� ������ (�����)
	salesumarmor	= 0;	// ��������� ������ (�����)
	saleskills		= 0;	// ����� ���������/����� (�����)			
	salesumskills	= 0;	// ��������� ���������/������ (�����)

	fout.open("save_Skills_Rats", ios_base::out|ios_base::in|ios_base::trunc);
}
////////////////////////////////////////////////////////////////////////////////
/*									���� ������								  */
////////////////////////////////////////////////////////////////////////////////
int Skills::cininfo()
{
	cout << "����\t:"; 
	if(!(cin >> point) || point < 0)	// ����
	{
		cout << "\n\n\t\t";		
		cout << "���� ����, ������ ����������, ������ ���� ����������!";
		cout << "\n\n";
	}

	

	cout << "�����\t:";
	if(!(cin >> rats) || rats < 0)		// �����
	{
		cout << "\n\n\t\t";		
		cout << "���� ����, ������ ����������, ������ ���� ����������!";
		cout << "\n\n";
	}

	fout << "����\t-> " << point << endl;	// ������ � ���� ����� ������
	fout << "�����\t-> " << rats << endl;	// ������ � ���� ���-�� ���� 


	return 44;
}

////////////////////////////////////////////////////////////////////////////////
/*								 �������������								  */ 
////////////////////////////////////////////////////////////////////////////////
void Skills::four_skills()
{
	result = 0; // ������� �� ���������� ��������	

	for(int i=0; i<=point; i++)	// ���� ������������ 1+2+3+4+5...
		result+=i;				// ��������� ������ �� 1-�� ��������	
	
	sumpoints	= result*rats;		// ����� �����
	armor		= sumpoints/4;		// ����� ��� 1-�� ������
	sumarmor	= (rats*point)/4;	// ��������� ��� 1-�� ������
}
void Skills::show_four() // SHOW
{
	four_skills();
	// ����� � ��������
	cout << "---------------------------------------------------------" << endl;
	cout << "������������� ����� ->" << endl;
	cout << "\t\t�����\t" << "������\t" << "������\t" << "�����\t" << endl;
	cout << "����� >\t\t" << armor << "\t" << armor << "\t" << armor 
		<< "\t" << armor << endl; 
	cout << "����� >\t\t" << sumarmor << "\t" << sumarmor << "\t" 
		<< sumarmor << "\t" << sumarmor << endl; 

	// ������ � ����
	fout << "---------------------------------------------------------" << endl;
	fout << "\t\t������������� �����: ";
	fout << "����� " << "������ " << "������ " << "�����" << endl;
	fout << "����� �� > \t" << armor << endl; 
	fout << "����� �� > \t" << sumarmor << endl;
}

					// � ����� "����� �� ��������" //
void Skills::four_skills_discount() 
{
	result = 0; // ������� �� ���������� ��������
	
	for(int i=0; i<=point; i++) // ��������� ������ �� 1-�� ��������
	{
		int sum = 1;
		sum+=i;
		result+=sum/2;
	}

	salesumpoints	= result*rats;			// ����� �����
	salearmor		= salesumpoints/4;		// ����� ��� 1-�� ������
	salesumarmor	= (rats*point)/4;		// ��������� ��� 1-�� ������
}
void Skills::show_four_discount() // SHOW
{
	four_skills_discount();
	// ����� � ��������
	cout << "����� �� ��������" << endl;
	cout << "\t\t" << salearmor << "\t" << salearmor << "\t" << salearmor << "\t" 
		<< salearmor << endl; 
	cout << "\t\t" << salesumarmor << "\t" << salesumarmor << "\t" 
		<< salesumarmor << "\t" << salesumarmor << endl; 
		
	// ������ � ����
	fout << "*����� �� ��������*" << endl;
	fout << "����� �� > \t" << salearmor << endl; 
	fout << "����� �� > \t" << salesumarmor << endl;
}

////////////////////////////////////////////////////////////////////////////////
/*								 	��������������							  */ 
////////////////////////////////////////////////////////////////////////////////
void Skills::alternative()
{
	result = 0; // ������� �� ���������� ��������	

	for(int i=0; i<=point; i++)	// ���� ������������ 1+2+3+4+5...
		result+=i;				// ��������� ������ �� 1-�� ��������	
	
	sumpoints	= result*rats;			// ����� �����
	armor		= sumpoints/4;			// ����� ��� 1-�� ������
	skills		= (sumpoints/4)*3;		// ����� ��� 4-� �������
	sumarmor	= (rats*point)/4;		// ��������� ��� 1-�� ������
	sumskills	= ((rats*point)/4)*3;	// ��������� ��� 4-� �������
}
void Skills::show_alternative() // SHOW
{
	alternative();
	
	// ����� � ��������
	cout << "---------------------------------------------------------" << endl;
	cout << "�������������� ������� ->" << endl;
	cout << "\t\t������\t" << "�����" << endl;
	cout << "����� >\t\t" << armor << "\t" << skills << endl; 
	cout << "����� >\t\t" << sumarmor << "\t" << sumskills << endl; 
	
	// ������ � ����
	fout << "---------------------------------------------------------" << endl;
	fout << "\t\t�������������� �������" << endl;
	fout << "\t\t������\t" << "�����" << endl;
	fout << "����� > " << armor << " \t" << skills << endl; 
	fout << "����� > " << sumarmor << " \t" << sumskills << endl; 
}
					// � ����� "����� �� ��������" //
void Skills::alternative_discount() 
{
	result = 0; // ������� �� ���������� ��������

	for(int i=0; i<=point; i++) // ��������� ������ �� 1-�� ��������
	{
		int sum = 1;
		sum+=i;
		result+=sum/2;
	}
	
	salesumpoints	= result*rats;			// ����� �����
	salearmor		= salesumpoints/4;		// ����� ��� 1-�� ������
	saleskills		= (salesumpoints/4)*3;	// ����� ��� 4-� �������
	salesumarmor	= (rats*point)/4;		// ��������� ��� 1-�� ������
	salesumskills	= ((rats*point)/4)*3;	// ��������� ��� 4-� �������
}
void Skills::show_alternative_discount() // SHOW
{
	alternative_discount();
	// ����� � ��������
	cout << "����� �� �������� " << endl;
	cout << "\t\t" << salearmor << "\t" << saleskills << endl; 
	cout << "\t\t" << salesumarmor << "\t" << salesumskills << endl; 

	// ������ � ����		
	fout << "*����� �� ��������*" << endl;
	fout << "\t\t������\t" << "�����" << endl;
	fout << "����� > " << salearmor << " \t" << saleskills << endl; 
	fout << "����� > " << salesumarmor << " \t" << salesumskills << endl;  	
}
////////////////////////////////////////////////////////////////////////////////
/*-----------------------------����� ���� ����������--------------------------*/
////////////////////////////////////////////////////////////////////////////////
bool Skills::inputdata()
{
	//cout << "\n\t***����������� ��� ���� \"����� ������\"***" << endl;
		
	if(fout.is_open())
	{
		cininfo();
	
		show_four();
		show_four_discount();
	
		show_alternative();
		show_alternative_discount();
		
		fout << "\n\t��������� ���������" << endl;
		fout.close();
	}

	return false;
}
#endif 
