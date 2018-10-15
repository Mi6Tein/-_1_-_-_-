//Напишите программу проверяющую является ли число составным. В программе гарантируется, что число - натуральное
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	unsigned int N;
	cin >> N;
	if (N == 0) return 0;
	if (N == 1) {
		cout << "Unit" << endl;
		system("pause");
		return 0;
	}
	for (int i = 2; i <= sqrt(N); i++ ) {
		if (N % i == 0) {
			cout << "Composite" << endl;
			system("pause");
			return 0;
		}
	}
	cout << "Prime" << endl;
	system("pause");
	return 0;
}