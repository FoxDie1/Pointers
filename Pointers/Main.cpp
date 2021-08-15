#include <iostream>
using namespace std;

//#define POINTERS_BASICS//основы указателей
#define POINTERS_AND_ARRAYS//указатели и массивы


void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef POINTERS_BASICS
	cout << "Hello Pointers"<<endl;
	int a = 2;
	int* pa = &a;//&- это оператор взятия адресса(Adress of Operators)//
	cout << a << endl;//вывод перемнной а на экран
	cout << &a << endl;//Взятие Адреса перемнной "а" прямо выводе
	cout << pa << endl;//вывод адресса переменой "а" ,хронящегося в указателе "pa"
	cout << *pa << endl;//*-оператор разименования;
	//"pa"-работаем с адресом;
	//*pa-работаем со значением по адрессу

	int* pb;
	int b = 3;
	pb = &b;//инициализируем указатель после его обьявления
	cout << b << endl;
	cout << &b << endl;
	cout << pb << endl;
	cout << *pb << endl;
	//int-int
	//int*-указатель на Int
	//double-double
	//double*-указатель на double
	//char-char
	//char*-указатель на char
#endif//Pointers_Basics
#ifdef POINTERS_AND_ARRAYS
	const int n = 5;
	short arr[n] = { 3,5,8,13,15 };
	cout << arr << endl;//Имя массива является указателем на массив
	                    //по скольку содержит в себе адресс нулевого элемента массива,
	                    //а следовательно и адресс всего массива.
	cout << *arr << endl;//разименовав адресс массива мы получаем нулевой элемент этого массива(только нулевой)
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << "\n";
	}
	cout << endl;

#endif
} 