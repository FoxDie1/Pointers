#include "stdafx.h"
#include "fillrand.cpp"
#include "statistics.cpp"
#include "print.cpp"

void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "¬ведите число массивов:"; cin >> n;
	int* arr = new int[n] {};
	FillRand(arr, n);
	Print(arr, n);

   arr = PushBack(arr, n, 1024);
	Print(arr, n);

	arr = PushFront(arr, n, 2048);
	Print(arr, n);

	arr = PopBack(arr, n);
	Print(arr, n);

	arr = PopFront(arr, n);
	Print(arr, n);

	arr = Insert(arr, n, 3, 4096);
	Print(arr, n);

	arr = Erase(arr, n, 3);
	Print(arr, n);
	delete[] arr;
}
