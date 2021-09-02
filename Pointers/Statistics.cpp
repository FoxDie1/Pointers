#include "Statistics.h"

template<typename T>
T* PopBack(T arr[], T& n)
{
	T* buffer = new int[--n]{};
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	return buffer;
}

template<typename T>
T* PopFront(T arr[], T& n)
{
	T* buffer = new int[--n]{};
	for (int i = 0; i < n; i++)
	{
		buffer[i - 1] = arr[i];
	}
	delete[] arr;
	return buffer;
}

template<typename T>
T* PushBack(T arr[], T& n, T value)
{
	//1)������� �������� ������ ������� �������.
	T* buffer = new int[n + 1]{};
	//2)�������� ��� �������� �� ��������� ������� � ��������
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//3)����� ���� ��� ������ ���� �����������,�������� ������ ����� �������.
	delete[] arr;
	//4)��������� ������ � ��������� �� �������� ������:
	arr = buffer;
	//5)� ������ ����� ����� ����� ����� �������� ����� �������� � ����� �������:
	arr[n] = value;
	//6)����� ���������� �������� � ����� �������,���-�� ��� ���������� ������������� �� 1.
	n++;
	return arr;
}

template<typename T>
T* PushFront(T arr[], T& n, T value)
{
	//1)������� �������� ������ ������� �������.
	T* buffer = new int[n + 1]{};
	//2)�������� ��� �������� �� ��������� ������� � ��������
	for (int i = 0; i < n; i++)
	{
		buffer[i + 1] = arr[i];
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
template<typename T>
T* Insert(T arr[], T& n, const int index, T value)
{
	for (int i = 0; i < index; i++)
	{
		for (int j = index; j < n; j++)
		{
			arr[j + 1] = arr[j];
		}
		arr[i] = arr[i];
	}
	arr[index] = value;
	return arr;
}

template<typename T>
T* Erase(T arr[], T& n, const int index)
{
	for (int i = 0; i < index; i++)
	{
		arr[i] = arr[i];
	}
	for (int j = index; j < n; j++)
	{
		arr[j - 1] = arr[j];
	}
	return arr;

}