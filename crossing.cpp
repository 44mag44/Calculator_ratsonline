#ifndef CROSSING_CPP
#define CROSSING_CPP

#include "crossing.h"

////////////////////////////////////////////////////////////////////////////////
/*									�����������								  */
////////////////////////////////////////////////////////////////////////////////
Crossing::Crossing()
{
	sumdevil16		= 0;	// ������ ��� 16 �������
	sumdevil18		= 0;	// ������ ��� 18 �������
	sumdevil19		= 0;	// ������ ��� 19 �������
	sumdevil20		= 0;	// ������ ��� 20 �������
	sumdevilmax		= 0;	// ������ ��� ����.�������
	sumvampire21	= 0;	// ������ ��� ������� 21 ������
	sumvampire22	= 0;	// ������ ��� ������� 22 ������
	sumvampire23	= 0;	// ������ ��� ������� 23 ������
	sumvampire24	= 0;	// ������ ��� ������� 24 ������
	sumvampire25	= 0;	// ������ ��� ������� 25 ������
	sumvampiremax	= 0;	// ������ ��� ����.�������
	sumjoker		= 0;	// ������ ��� ������� �������
};

////////////////////////////////////////////////////////////////////////////////
/*									������� �������							  */ 
////////////////////////////////////////////////////////////////////////////////
void Crossing::silica_7() // ������, �����������
{
	int angel11		= 60;	// 7+7+7=11 >> 28+32=60
	int angel13		= 88;	// 11+11=13
	int devil16		= 104;	// 13+13=16
	int devil18		= 288;	// 16+16=18
	int devil20		= 324;	// 18+18=20
	int devilmax20	= 324;	// 20+16=20
	int vampire22	= 360;	// 20+20=22 >> devilmax20 + devilmax20

	sumdevil16		= (angel11*4)+(angel13*2)+devil16;		//	16 ������
	sumdevil18		= (sumdevil16*2)+devil18;				//	18 ������ 
	sumdevil20		= (sumdevil18*2)+devil20;				//	20 ������	
	sumdevilmax 	= (sumdevil20+sumdevil16)+devilmax20;	//	+20 ������
	sumvampire22	= (sumdevilmax*2)+vampire22;			//	22 ������

	cout << "---------------------------------------------------------" << endl;
	cout << "\t\t- ������. 7 ������� -" << endl;
	cout << "���-�� ������ >\t\t �������|����.����" << endl;	
	cout << "������\t16 ��.  (12��.)\t-> " << sumdevil16 
		<< "\t| " << sumdevil16/2 << endl;
	cout << "������\t18 ��.  (24��.)\t-> " << sumdevil18 
		<< "\t| " << sumdevil18/2 << endl;
	cout << "������\t20 ��.  (48��.)\t-> " << sumdevil20 
		<< "\t| " << sumdevil20/2 << endl;
	cout << "������\t+20 ��. (60��.)\t-> " << sumdevilmax 
		<< "\t| " << sumdevilmax/2 << endl;
	cout << "������\t22 ��. (120��.)\t-> " << sumvampire22
		<< "\t| " << sumvampire22/2 << endl;
	
	cout << "����� > " << endl;
	cout << " 16 ->\t7+7=9 , 9+7=11 , 11+11=13 , 13+13=16(12)" << endl;
	cout << " 18 ->\t16+16=18(24)" << endl;
	cout << " 20 ->\t18+18=20(48)" << endl;
	cout << "+20 ->\t20+16=20(60)" << endl;
	cout << " 22 ->\t20+20=22(120)" << endl;
}

void Crossing::freeday_7() // �������� ����
{
	int royal10		= 29;	// 7+7+7=10
	int angel12		= 20;	// 12 angel 
	int angel14		= 48;	// 12+12=14
	int devil16		= 56;	// 14+14=16
	int devil19		= 144;	// 16+16=19
	int devilmax20	= 171;	// 19+19=20
	int vampire22	= 180;	// 20+20=22

	sumdevil16		= (royal10*8)+(angel12*4)+(angel14*2)+devil16;	// 16 ������
	sumdevil19		= (sumdevil16*2)+devil19;						// 19 ������
	sumdevilmax 	= (sumdevil19*2)+devilmax20;					// 20 ������
	sumvampire22	= (sumdevilmax*2)+vampire22;					// 22 ������

	cout << "---------------------------------------------------------" << endl;
	cout << "\t\t- 7 ������� -" << endl;
	cout << "���-�� ������ >\t\t �������|����.����" << endl;
	cout << "������\t16 ��. (24��.)\t-> " << 2*sumdevil16 
		<< "\t| " << sumdevil16 << endl;
	cout << "������\t19 ��. (48��.)\t-> " << 2*sumdevil19 
		<< "\t| " << sumdevil19 << endl;
	cout << "������\t20 ��. (96��.)\t-> " << 2*sumdevilmax 
		<< "\t| " << sumdevilmax << endl;
	cout << "������\t22 ��. (192��.)\t-> " << 2*sumvampire22 
		<< "\t| " << sumvampire22 << endl;
	
	cout << "����� > " << endl;
	cout << " 16 ->\t7+7=8 , 8+7=10 , 10+10=12 , 12+12=14(12) , \n\t";
	cout << " 14+14=16(24)" << endl; 
	cout << " 19 ->\t16+16=19(48)" << endl;
	cout << " 20 ->\t19+19=20(96)" << endl;
	cout << " 22 ->\t20+20=22(192)" << endl;
	cout << "---------------------------------------------------------" << endl;
}

////////////////////////////////////////////////////////////////////////////////
/*								 ������ �������								  */ 
////////////////////////////////////////////////////////////////////////////////
void Crossing::silica_8()	// � �����
{
	int royal10		= 32;	// 8+8=10
	int angel13		= 40;	// 10+10=13 
	int angel15		= 104;	// 13+13=15
	int devil18		= 120;	// 15+15=18
	int totem20		= 324;	// 18+18=20
	
	int sumdevil18	= 0;	//sum 18 divel
	int totem		= 0;	//sum 20 divel
		
	sumdevil18 = (royal10*8)+(angel13*4)+(angel15*2)+devil18;	// 18 �������
	totem = (sumdevil18*2) + totem20;							// 20 ������
	
	cout << "---------------------------------------------------------" << endl;
	cout << "\t- ������. �����. 8 ������� -" << endl;
	cout << "���-�� ������ >\t\t �������|����.����" << endl;
	cout << "������\t18 ��. (16��.)\t-> " << sumdevil18	<< "\t| " 
			<< sumdevil18/2 << endl;
	cout << "������\t20 ��. (32��.)\t-> " << totem << "\t| " << totem/2 << endl;
	
	cout << "����� > " << endl;
	cout << " 18 ->\t8+8=10 , 10+10=13 , 13+13=15(8) , 15+15=18(16)" << endl; 
	cout << " 20 ->\t18+18=20(32)"	<< endl;
}

void Crossing::freeday_8()	// �������� ����
{
	int angel12		= 104;	// 10+10=12
	int angel14		= 96;	// 12+12=14
	int devil16		= 112;	// 14+14=16
	int devil18		= 288;	// 16+16=18
	int devil20		= 324;	// 18+18=20

	int vampire21		= 324;	// 20+16=21
	int vampire22		= 360;	// 20+20=22
	int vampire23		= 672;	// 21+21=23
	int vampire24		= 704;	// 22+22=24
	int maxvampire25	= 752;	// 24+23=25

	int joker28			= 800;	// 25+25=28 	
	
	sumdevil16		= (angel12*4)+(angel14*2)+devil16;			// 16 ������
	sumdevil18		= (sumdevil16*2)+devil18;					// 18 ������
	sumdevilmax	  	= (sumdevil18*2)+devil20;					// 20 ������
	sumvampire22	= (sumdevilmax*2)+vampire22;				// 22 ������
	sumvampire24	= (sumvampire22*2)+vampire24;				// 24 ������
	sumvampire21  	= (sumdevilmax+sumdevil16)+vampire21;		// 21 ������
	sumvampire23  	= (sumvampire21*2)+vampire23;				// 23 ������	
	sumvampiremax	= (sumvampire23+sumvampire24)+maxvampire25;	//+25 ������
	sumjoker		= (sumvampiremax*2)+joker28;				// 28 ������ 


	cout << "---------------------------------------------------------" << endl;
	cout << "\t\t- 8 ������� -" << endl;
	cout << "���-�� ������ >\t\t  �������|����.����" << endl;
	cout << "������\t16 ��. (16��.)\t-> " << sumdevil16	<< "\t | " 
			<< sumdevil16/2 << endl;
	cout << "������\t18 ��. (32��.)\t-> " << sumdevil18	<< "\t | " 
			<< sumdevil18/2 << endl;
	cout << "������\t20 ��. (64��.)\t-> " << sumdevilmax << "\t | " 
			<< sumdevilmax/2 << endl;
	cout << "������\t22 ��. (128��.)\t-> " << sumvampire22 << "\t | "
			<< sumvampire22/2 << endl;
	cout << "������\t24 ��. (256��.)\t-> " << sumvampire24 << " | "
			<< sumvampire24/2 << endl;
	cout << "������\t21 ��. (80��.)\t-> " << sumvampire21 << "\t | "
			<< sumvampire21/2 << endl;
	cout << "������\t23 ��. (160��.)\t-> " << sumvampire23 << " | "
			<< sumvampire23/2 << endl;
	cout << "������\t25 ��. (416��.)\t-> " << sumvampiremax << " | "
			<< sumvampiremax/2 << endl;
	cout << "������\t28 ��. (832��.)\t-> " << sumjoker << " | "
			<< sumjoker/2 << endl;
	
	cout << "����� > " << endl;
	cout << " 14 ->\t8+8=10(2) , 10+10=12(4) , 12+12=14(8)\n";
	cout << " 16 ->\t14+14=16(16)\t->8x ��������� ��������\n";
	cout << " 18 ->\t16+16=18 (32)\t->6x\n";
	cout << " 20 ->\t18+18=20 (64)\t->41x\n";
	cout << " 22 ->\t20+20=22 (128)\t->114x\n";
	cout << " 24 ->\t22+22=24 (256)\t->218x\n";
	cout << " 21 ->\t20+16=21 (80)\t->109x\n";
	cout << " 23 ->\t21+21=23 (160)\t->262x\n";
	cout << " 25 ->\t24+23=25 (416)\t->2x\n";
	cout << " 28 ->\t25+25=28 (832)\t->337x\n";
	cout << "---------------------------------------------------------" << endl;

}
////////////////////////////////////////////////////////////////////////////////
/*-----------------------------����� ���� ����������--------------------------*/
////////////////////////////////////////////////////////////////////////////////
void Crossing::inputdata()
{
	char ask; // �������� ������� �����������?
	cout << "---------------------------------------------------------" << endl;
	cout << "�������� ����� �����������? (y|n): ";
	cin >> ask;

	if(ask == 'y' || ask == 'Y')
	{
		while (true) 
		{
			char cross = ' '; // ����� �� ������� �����?
			cout << "������� ������� ��� ���������: ";
			cin >> cross;				
			if(cross == '7')
			{	
				// �������� ����������� ��� ������� �������
				silica_7();	// ������ 
				freeday_7();	// ���������
				break;
			}
			else
			if(cross == '8')
			{	
				// �������� ����������� ��� ������� �������	
				silica_8();	// ������
				freeday_8();	// ���������
				break;
			}
			else
			{
				cout << "-------------------------------";
				cout <<	"--------------------------" << endl;
				cout << "\t���� ����� ������ ��� 7 � 8 �������!" << endl;
	
				break;
			}
		}
	}
	else
	if(ask == 'n' || ask == 'N')
	{	
		cout << "-------------------------------";
		cout <<	"--------------------------" << endl;
		cout << "\t��������� ���������.\n";
	}
	else
	{
		cout << "-------------------------------";
		cout <<	"--------------------------" << endl;
		cout << "\n...���-�� ����� �� ���" << endl;
	}

}

#endif
