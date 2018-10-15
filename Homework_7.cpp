/*Напишите программу находящую минимальную сумму пары элементов массива отстоящих друг от друга не менее чем на 4 элемента(первый и пятый элемент
могут подходить, а первый и третий - нет). Эффективность в данной программе не приоритетна.*/
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	int *arr = new int[N];
	for (int i = 0; i < N; i++) cin >> arr[i];
	int min = arr[0] + arr[4];
	for (int i = 0; i < N - 4; i++) {
		for (int k = i + 4; k < N; k++) {
			if (arr[i] + arr[k] < min) min = arr[i] + arr[k];
		}
		 
	}
	cout << min << endl;
	system("pause");
	return 0;
}
