#include <iostream>
using namespace std;

//#define POINTERS_BASICS//������ ����������
#define POINTERS_AND_ARRAYS//��������� � �������


void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef POINTERS_BASICS
	cout << "Hello Pointers"<<endl;
	int a = 2;
	int* pa = &a;//&- ��� �������� ������ �������(Adress of Operators)//
	cout << a << endl;//����� ��������� � �� �����
	cout << &a << endl;//������ ������ ��������� "�" ����� ������
	cout << pa << endl;//����� ������� ��������� "�" ,����������� � ��������� "pa"
	cout << *pa << endl;//*-�������� �������������;
	//"pa"-�������� � �������;
	//*pa-�������� �� ��������� �� �������

	int* pb;
	int b = 3;
	pb = &b;//�������������� ��������� ����� ��� ����������
	cout << b << endl;
	cout << &b << endl;
	cout << pb << endl;
	cout << *pb << endl;
	//int-int
	//int*-��������� �� Int
	//double-double
	//double*-��������� �� double
	//char-char
	//char*-��������� �� char
#endif//Pointers_Basics
#ifdef POINTERS_AND_ARRAYS
	const int n = 5;
	short arr[n] = { 3,5,8,13,15 };
	cout << arr << endl;//��� ������� �������� ���������� �� ������
	                    //�� ������� �������� � ���� ������ �������� �������� �������,
	                    //� ������������� � ������ ����� �������.
	cout << *arr << endl;//����������� ������ ������� �� �������� ������� ������� ����� �������(������ �������)
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << "\n";
	}
	cout << endl;

#endif
} 