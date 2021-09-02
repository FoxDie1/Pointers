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
	//1)—оздаем бу‘ерный массив нужного размера.
	T* buffer = new int[n + 1]{};
	//2)копируем все значени€ из исходного массива в буферный
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//3)ѕосле того как данные были скопированы,исходный массив можно удалить.
	delete[] arr;
	//4)ѕодмен€ем адресс в указателе на исходный массив:
	arr = buffer;
	//5)» только после всего этого можно записать новое значение в конец массива:
	arr[n] = value;
	//6)после добавлени€ элемента в конец массива,кол-во его эллементов увеличиваетс€ на 1.
	n++;
	return arr;
}

template<typename T>
T* PushFront(T arr[], T& n, T value)
{
	//1)—оздаем бу‘ерный массив нужного размера.
	T* buffer = new int[n + 1]{};
	//2)копируем все значени€ из исходного массива в буферный
	for (int i = 0; i < n; i++)
	{
		buffer[i + 1] = arr[i];
	}
	//3)ѕосле того как данные были скопированы,исходный массив можно удалить можно.
	delete[] arr;
	//4)ѕодмен€ем адресс в указателе на исходный массив:
	arr = buffer;
	//5)» только после всего этого можно записать новое значение в конец массива:
	arr[0] = value;
	//6)после добавлени€ элемента в конец массива,кол-во его эллементов увеличиваетс€ на 1.
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