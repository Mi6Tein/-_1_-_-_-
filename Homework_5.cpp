//НАапишите функции min(минимальное) max(максимальное) avg(среднее арифм) med(медианное) и процедуру swap(переставляет значеине по кругу) принимающие в себя 3
//вещественных аргумента и программу с примером их использования
#include "pch.h"
#include <iostream>

using namespace std;

float min(float a, float b, float c) {
	if (a <= b && a <= c) return a;
	else if (b <= c && b <= a) return b;
	else return c;
}

float max(float a, float b, float c) {
	if (a <= c && b <= c) return c;
	else if (b <= a && c <= a) return a;
	else return b;
}

float avg(float a, float b, float c) {
	return (a + b + c) / 3;
}

float med(float a, float b, float c) {
	return b;
}

void swap(float &a, float &b, float &c) {
	float Sw;
	Sw = a;
	a = c;
	c = b;
	b = Sw;
}


int main()
{
	setlocale(LC_ALL, "Rus");
	float A, B, C;
	char check = '+';
	cout << "Присвойте значения переменным А, B, C соответственно: " << endl;
	cin >> A >> B >> C;
	while(check = '+') {
		cout << "A = " << A << ", B = " << B << ", C = " << C << endl;
	cout << "Минимальное значение = " << min(A, B, C) << endl;
	cout << "Максимальное значение = " << max(A, B, C) << endl;
	cout << "Cреднее арифметическое = " << avg(A, B, C) << endl;
	cout << "Медианное = " << med(A, B, C) << endl;
	cout << "Напишите '+' если хотите переставить значения переменных по кругу(swap), или 'Идеально' если хотите поставить '5' за работу :)" << endl;
	cin >> check;
	if (check != '+') break;
	swap(A, B, C);
    }
	cout << "A = " << A << ", B = " << B << ", C = " << C << endl;
	system("pause");
	return 0;
}
