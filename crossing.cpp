#ifndef CROSSING_CPP
#define CROSSING_CPP

#include "crossing.h"

////////////////////////////////////////////////////////////////////////////////
/*									Конструктор								  */
////////////////////////////////////////////////////////////////////////////////
Crossing::Crossing()
{
	sumdevil16		= 0;	// сердец для 16 дьявола
	sumdevilmax		= 0;	// сердец для макс.дьявола
	sumvampire21	= 0;	// сердец для вампира 22 уровня
	sumvampire22	= 0;	// сердец для вампира 22 уровня
	sumvampiremax	= 0;	// сердец для макс.вампира
	sumjoker		= 0;	// сердец для первого джокера
};

////////////////////////////////////////////////////////////////////////////////
/*									Седьмые пеленки							  */ 
////////////////////////////////////////////////////////////////////////////////
void Crossing::silica_7() // Силище, скрещивание
{
	int angel11		= 60;	// 7+7+7=11 >> 28+32=60
	int angel13		= 88;	// 11+11=13
	int devil16		= 104;	// 13+13=16
	int devil18		= 288;	// 16+16=18
	int devil20		= 324;	// 18+18=20
	int devilmax20	= 324;	// 20+16=20
	int vampire22	= 360;	// 20+20=22 >> devilmax20 + devilmax20

	sumdevil16		= (angel11*4)+(angel13*2)+devil16;				// 16 дьявол
	sumdevilmax 	= (sumdevil16*5)+(devil18*2)+devil20+devilmax20;// 20 дьявол
	sumvampire22	= (sumdevilmax*2)+vampire22;					// 22 вампир

	cout << "---------------------------------------------------------" << endl;
	cout << "\t\tСилища 7 пеленки" << endl;
	cout << "Дьявол\t16 ур. (12кр.)\t-> " << sumdevil16 
		<< "\t| " << sumdevil16/2 << endl;
	cout << "Дьявол\t20 ур. (60кр.)\t-> " << sumdevilmax 
		<< "\t| " << sumdevilmax/2 << endl;
	cout << "Вампир\t22 ур. (120кр.)\t-> " << sumvampire22
		<< "\t| " << sumvampire22/2 << endl;
	
	cout << "Схема > " << endl;
	cout << " 16 ->\t7+7=9 , 9+7=11 , 11+11=13 , 13+13=16(12)" << endl;
	cout << " 20 ->\t16+16(24) , 18+18=20(48) , 20+16=20(60)" << endl;
	cout << " 22 ->\t20+20=22(120)" << endl;
}

void Crossing::freeday_7() // Свобоный день
{
	int royal10		= 29;	// 7+7+7=10
	int angel12		= 20;	// 12 angel 
	int angel14		= 48;	// 12+12=14
	int devil16		= 56;	// 14+14=16
	int devil19		= 144;	// 16+16=19
	int devilmax20	= 171;	// 19+19=20
	int vampire22	= 180;	// 20+20=22

	sumdevil16		= (royal10*8)+(angel12*4)+(angel14*2)+devil16;	// 16 дьявол
	sumdevilmax 	= (sumdevil16*4)+(devil19*2)+devilmax20;		// 20 дьявол
	sumvampire22	= (sumdevilmax*2)+vampire22;					// 22 вампир

	cout << "---------------------------------------------------------" << endl;
	cout << "\t\tСвободный день 7 пеленки" << endl;
	cout << "Дьявол\t16 ур. (24кр.)\t-> " << 2*sumdevil16 
		<< "\t| " << sumdevil16 << endl;
	cout << "Дьявол\t20 ур. (96кр.)\t-> " << 2*sumdevilmax 
		<< "\t| " << sumdevilmax << endl;
	cout << "Вампир\t22 ур. (192кр.)\t-> " << 2*sumvampire22 
		<< "\t| " << sumvampire22 << endl;
	
	cout << "Схема > " << endl;
	cout << " 16 ->\t7+7=8 , 8+7=10 , 10+10=12 , 12+12=14(12) , \n\t";
	cout << " 14+14=16(24)" << endl; 
	cout << " 20 ->\t16+16=19(48) , 19+19=20(96)" << endl;
	cout << " 22 ->\t20+20=22(192)" << endl;
	cout << "---------------------------------------------------------" << endl;
}

////////////////////////////////////////////////////////////////////////////////
/*								 Восмые пеленки								  */ 
////////////////////////////////////////////////////////////////////////////////
void Crossing::silica_8()	// В Тотем
{
	int royal10		= 32;	// 8+8=10
	int angel13		= 40;	// 10+10=13 
	int angel15		= 104;	// 13+13=15
	int devil18		= 120;	// 15+15=18
	int totem20		= 324;	// 18+18=20
	
	int sumdevil18	= 0;	//sum 18 divel
	int totem		= 0;	//sum 20 divel
		
	sumdevil18 = (royal10*8)+(angel13*4)+(angel15*2)+devil18;
	totem = (sumdevil18*2) + totem20;
	
	cout << "---------------------------------------------------------" << endl;
	cout << "\tСилища 8 пеленки-Тотем" << endl;
	cout << "Дьявол\t18 ур. (16кр.)\t-> " << sumdevil18	<< "\t| " 
			<< sumdevil18/2 << endl;
	cout << "Дьявол\t20 ур. (32кр.)\t-> " << totem << "\t| " << totem/2 << endl;
	
	cout << "Схема > " << endl;
	cout << " 18 ->\t8+8=10 , 10+10=13 , 13+13=15(8) , 15+15=18(16)" << endl; 
	cout << " 20 ->\t18+18=20(32)"	<< endl;
}

void Crossing::freeday_8()	// Свобоный день
{
	int angel12		= 102;	// 10+10=12
	int angel14		= 96;	// 12+12=14
	
	int devil16		= 112;	// 14+14=16
	int devil18		= 288;	// 16+16=18
	int devil20		= 324;	// 18+18=20

	int vampire21		= 360;	// 20+16=21
	int vampire22		= 360;	// 20+20=22
	int vampire24		= 704;	// 22+22=24
	int vampire25		= 736;	// 24+22=25
	int maxvampire25	= 736;	// 25+21=25

	int joker28			= 800;	// 25+25=28 	
	
	sumdevil16		= (angel12*4)+(angel14*2)+devil16;					 // 16
	sumdevilmax	  	= (sumdevil16*4)+(devil18*2)+devil20;			 	 // 20
	sumvampire21  	= (sumdevilmax+sumdevil16)+vampire21;				 // 21
	sumvampire22	= (sumdevilmax*2)+vampire22;						 // 22
	sumvampiremax	= 
		(sumvampire22*3)+sumvampire21+vampire24+vampire25+maxvampire25;  // 25
	sumjoker		= (sumvampiremax*2)+joker28;						 // 28 


	cout << "---------------------------------------------------------" << endl;
	cout << "\tСвободный день 8 пеленки" << endl;
	cout << "Дьявол\t16 ур. (16кр.)\t-> " << sumdevil16	<< "\t | " 
			<< sumdevil16/2 << endl;
	cout << "Дьявол\t20 ур. (64кр.)\t-> " << sumdevilmax << "\t | " 
			<< sumdevilmax/2 << endl;
	cout << "Вампир\t22 ур. (128кр.)\t-> " << sumvampire22 << "\t | "
			<< sumvampire22/2 << endl;
	cout << "Вампир\t25 ур. (464кр.)\t-> " << sumvampiremax << " | "
			<< sumvampiremax/2 << endl;
	cout << "Джокер\t28 ур. (928кр.)\t-> " << sumjoker << " | "
			<< sumjoker/2 << endl;
	
	cout << "Схема > " << endl;
	cout << " 16 ->\t8+8=10 (2) , 10+10=12 (4) , 12+12=14 (8) , \n\t";
	cout << " 14+14=16 (16)\n";
	cout << " 20 ->\t16+16=18 (32) , 18+18=20 (64)\n";
	cout << " 22 ->\t20+20=22 (128)\n";
	cout << " 25 ->\t22+22=24 (256) , 24+22=25 (384) , 20+16=21 (80) , \n\t";
	cout << " 25+21=25 (464)\n";
	cout << " 28 ->\t25+25=28 (928)" << endl;
	cout << "---------------------------------------------------------" << endl;

}
////////////////////////////////////////////////////////////////////////////////
/*-----------------------------Вывод всей информации--------------------------*/
////////////////////////////////////////////////////////////////////////////////
void Crossing::inputdata()
{
	char ask; // Показать таблицу скрещивания?
	cout << "---------------------------------------------------------" << endl;
	cout << "Показать схемы скрещиваний? (y|n): ";
	cin >> ask;

	if(ask == 'y' || ask == 'Y')
	{
		while (true) 
		{
			char cross = ' '; // какой ур пеленок нужен?
			cout << "Уровень пеленок для просмотра: ";
			cin >> cross;				
			if(cross == '7')
			{	
				// варианты скрещиваний для СЕДЬМЫХ пеленок
				Crossing::silica_7();	// силища 
				Crossing::freeday_7();	// свободный
				break;
			}
			else
			if(cross == '8')
			{	
				// варианты скрещиваний для ВОСЬМЫХ пеленок	
				Crossing::silica_8();	// силища
				Crossing::freeday_8();	// свободный
				break;
			}
			else
			{
				cout << "-------------------------------";
				cout <<	"--------------------------" << endl;
				cout << "\tЕсть схемы только для 7 и 8 пеленок!" << endl;
	
				break;
			}
		}
	}
	else
	if(ask == 'n' || ask == 'N')
	{	
		cout << "-------------------------------";
		cout <<	"--------------------------" << endl;
		cout << "\tпрограмма завершена.\n";
	}
	else
	{
		cout << "-------------------------------";
		cout <<	"--------------------------" << endl;
		cout << "\n...что-то пошло не так" << endl;
	}

}

#endif
