#include <iostream>
using namespace std;

#define Tab "\t";

void FillRand(int arr[], const int);
void Print(int arr[], const int);

int* PushBack(int arr[], int& n,int value);//��������� �������� � ����� �������
int* PushFront(int arr[], int& n, int value);
int* PopBack(int arr[], int& n);

//����������� ����,������� �� �����,�� ����� ������� �������.�� ��� �� �� ���� ������� �������.
//����� ���� �� ����������� �� ������ ������� ��� � ���� ����.��������� �� � �������� ��������.�� �������� �������� �������� �������,��� � ����� �������� ���� �������,� � ������ ������� ���� ����� ������ ����� ������?
//� �������� �������� ������� � ����� ��������� �������� �������� ���������� ������?��� �������� delete ����� ������� ������ ��������� �� �� ��������� ����� �������.
//���� ����� ������� ,��� ���������� ��� ���� ������� � ����������� � ����...
//P.S.
//� 64 ������ ������� ���� ����� ������ ����� �������������� 4�������� ������.
void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "������� ����� ��������:"; cin >> n;
	int* arr = new int[n] {};
	FillRand(arr, n);
	Print(arr, n);
	//arr[n] = 123;
	//n++;
    arr=PushBack(arr, n,1024);
	
	Print(arr, n);

	arr = PushFront(arr, n, 2048);
	Print(arr, n);
	arr = PopBack(arr, n);
	Print(arr, n);
	delete[] arr;
}

int* PopBack(int arr[], int& n)
{
	int* buffer = new int[--n]{};
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	return buffer;
}
int* PushBack(int arr[], int& n, int value)
{
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
	//6)����� ���������� �������� � ����� �������,���-�� ��� ���������� ������������� �� 1.
	n++;
	return arr;
}

int* PushFront(int arr[], int& n, int value)
{
	//1)������� �������� ������ ������� �������.
	int* buffer = new int[n+1]{};
	//2)�������� ��� �������� �� ��������� ������� � ��������
	for (int i = 0; i <n; i++)
	{
		buffer[i+1] = arr[i];
	}
	//3)����� ���� ��� ������ ���� �����������,�������� ������ ����� ������� �����.
	delete[] arr;
	//4)��������� ������ � ��������� �� �������� ������:
	arr = buffer;
	//5)� ������ ����� ����� ����� ����� �������� ����� �������� � ����� �������:
	arr[0] = value;
	//6)����� ���������� �������� � ����� �������,���-�� ��� ���������� ������������� �� 1.
	n++;
	return arr;
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout<<arr[i]<<Tab;
	}
	cout << endl;
}
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i]=rand()%100;
	}
}

