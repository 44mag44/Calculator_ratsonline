#ifndef LOGIC_H
#define LOGIC_H

#include "points.h"
#include "crossing.h"
#include "skills.h"

void play ()
{
	/*--------����� �������� ��� �������� ������� ����----------*/
	Point point;
	point.show();
	/*-------------������ ������ ��� ������� ����----------*/
	Skills calc;
	calc.inputdata();	
	/*------------------����� ���se�������---------*/
	Crossing cross;
	cross.inputdata();

}

#endif
