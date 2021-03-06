/*Напишите программу находящую обратный по модулю элемент. Иначе говоря по числам Х и N нужно найти такое число Y, что остаток при делении
Х*Y на N равен единице. В программе гарантируется , что все числа - натуральные */

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	unsigned int X, N;
	cin >> X >> N;
	if (X == 0 || N == 0) return 0;
	if (X == N || X % 2 == 0 && N % 2 == 0) {
		cout << "None" << endl;
		system("pause");
		return 0;
	}
	for (int Y = 1; Y <= N; Y++) {
		if ((X*Y) % N == 1) {
			cout << Y << endl;
			system("pause");
			return 0;
		}
	}
	cout << "None" << endl;
	system("pause");
	return 0;
}

