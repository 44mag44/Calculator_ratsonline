#ifndef CROSSING_H
#define CROSSING_H

#include <iostream>
using namespace std;

/*--------------------------------------------------------------------*/

class Crossing
{
private:
	int sumdevil16;		// сердец для 16 дьявола
	int sumdevilmax;	// сердец для макс.дьявола
	int sumvampire22;	// сердец для вампира 22 уровня
	int sumvampire21;	// сердец для вампира 21 уровня
	int sumvampiremax;	// сердец для макс.вампира
	int sumjoker;		// сердец для первого джокера
public:
	Crossing ();

	void inputdata();	// Вывод информации

	void silica_7();	// Силища
	void freeday_7();	// Свобоный день

	void silica_8();	// Силище + Татем
	void freeday_8();	// Свобоный день
};

#endif
