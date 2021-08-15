#include <iostream>
using namespace std;

#define Tab "\t";

void FillRand(int arr[], const int);
void Print(int arr[], const int);
//void PushBack(int arr[], int n);

//#define Push_Back
//#define Insert
#define Push_Front

//����������� ����,������� �� �����,�� ����� ������� �������.�� ��� �� �� ���� ������� �������.
//����� ���� �� ����������� �� ������ ������� ��� � ���� ����.��������� �� � �������� ��������.�� �������� �������� �������� �������,��� � ����� �������� ���� �������,� � ������ ������� ���� ����� ������ ����� ������?
//� �������� �������� ������� � ����� ��������� �������� �������� ���������� ������?��� �������� delete ����� ������� ������ ��������� �� �� ��������� ����� �������.
//���� ����� ������� ,��� ���������� ��� ���� ������� � ����������� � ����...
void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "������� ����� ��������:"; cin >> n;
	int* arr = new int[n] {};
	FillRand(arr, n);
	Print(arr, n);
    //PushBack(arr, n);
	//int value;
	//cout << "������� ����������� ��������:"; cin >> value;

#ifdef Push_Back
	//1)������� �������� ������ ������� �������.
	int* buffer = new int[n + 1]{};
	//2)�������� ��� �������� �� ��������� ������� � ��������
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//3)����� ���� ��� ������ ���� �����������,�������� ������ ����� ������� �����.
	delete[] arr;
	//4)��������� ������ � ��������� �� �������� ������:
	arr = buffer;
	//5)� ������ ����� ����� ����� ����� �������� ����� �������� � ����� �������:
	arr[n] = value;
	n++;
#endif

#ifdef Insert
	int* buffer = new int[n + 1]{};
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	arr = buffer;
	arr[3] = value;//��������� �������� � ������ �� �������,��� ������ ������� ���������� � ����� ������ ������� ������� ��������.
	n++;
#endif

#ifdef Push_Front
	int value;
	cout << "������� ����������� ��������:"; cin >> value;
	for (int i = n; i > 0; i--)
	{
		arr[0]=value;
	}
#endif

	Print(arr, n);
	delete[] arr;
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
	cout << endl;
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout<<arr[i]<<Tab;
	}
	cout << endl;
}

/*void PushBack(int arr[], int n)
{
	int value;
	cout << "������� ����������� ��������:"; cin >> value;
	//1)������� �������� ������ ������� �������.
	int* buffer = new int[n + 1] {};
	//2)�������� ��� �������� �� ��������� ������� � ��������
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//3)����� ���� ��� ������ ���� �����������,�������� ������ ����� ������� �����.
	delete[] arr;
	//4)��������� ������ � ��������� �� �������� ������:
	arr = buffer;
	//5)� ������ ����� ����� ����� ����� �������� ����� �������� � ����� �������:
	arr[n] = value;
	n++;
}*/