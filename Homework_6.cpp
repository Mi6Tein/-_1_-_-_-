/* напишите функцию soft упорядывающую массив цулых чисел и программу с примером ее использования. В коде запрещ использовать обращения к массиву по индексу.
Эффективность в данной программе не приоритетна. Кол-во арг функции не более 2*/

#include "pch.h"
#include <iostream>

using namespace std;

 void soft(int* arr, int N) { 
	 for (int i = 0; i < N - 1; i++) {
		 int min = *(arr + i);
		 for (int k = 1 + i, h = i; k < N; k++) {
			 if (*(arr + k) < min) { 
				 min = *(arr + k);
				 h = k;
			 }
			 if (k == N - 1) *(arr + h) = *(arr + i);
		 }
		 *(arr + i) = min;
	 }
}

int main()
{
	int N;
	cin >> N;
	int *arr = new int[N];
	for (int i = 0; i < N; i++) cin >> *(arr + i);
	soft(arr, N);
	for (int i = 0; i < N; i++) cout << *(arr + i) << " ";
	cout << endl;
	system("pause");
	return 0;
}

