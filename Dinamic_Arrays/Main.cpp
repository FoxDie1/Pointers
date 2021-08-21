#include <iostream>
using namespace std;

#define Tab "\t";

void FillRand(int arr[], const int);
void Print(int arr[], const int);

int* PushBack(int arr[], int& n,int value);//добавляет значение в конец массива
int* PushFront(int arr[], int& n, int value);
int* PopBack(int arr[], int& n);

//Приветствую Олег,Спасибо за видео,от части немного понятно.но все же не смог сделать домашку.
//Мысли есть но реализовать не совсем понимаю как в виде кода.Попытался не в функциях написать.по индексам записать значение понятно,как в конец записать тоже понятно,а в начало массива ведь можно только через индекс?
//А удаление значение массива я думаю реализуем спомощью удаления выделенной памяти?Ибо оператор delete может удалить только указатель но не отдельное звено массива.
//Буду ждать занятия ,мне инетересно все таки решение и разобраться в этом...
//P.S.
//В 64 битной системе макс объем памяти можно проадрессовать 4Эксобайт памяти.
void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите число массивов:"; cin >> n;
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
	//1)Создаем буФерный массив нужного размера.
	int* buffer = new int[n + 1]{};
	//2)копируем все значения из исходного массива в буферный
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//3)После того как данные были скопированы,исходный массив можно удалить можно.
	delete[] arr;
	//4)Подменяем адресс в указателе на исходный массив:
	arr = buffer;
	//5)И только после всего этого можно записать новое значение в конец массива:
	arr[n] = value;
	//6)после добавления элемента в конец массива,кол-во его эллементов увеличивается на 1.
	n++;
	return arr;
}

int* PushFront(int arr[], int& n, int value)
{
	//1)Создаем буФерный массив нужного размера.
	int* buffer = new int[n+1]{};
	//2)копируем все значения из исходного массива в буферный
	for (int i = 0; i <n; i++)
	{
		buffer[i+1] = arr[i];
	}
	//3)После того как данные были скопированы,исходный массив можно удалить можно.
	delete[] arr;
	//4)Подменяем адресс в указателе на исходный массив:
	arr = buffer;
	//5)И только после всего этого можно записать новое значение в конец массива:
	arr[0] = value;
	//6)после добавления элемента в конец массива,кол-во его эллементов увеличивается на 1.
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

