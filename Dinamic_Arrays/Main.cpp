#include <iostream>
using namespace std;

#define Tab "\t";

void FillRand(int arr[], const int);
void Print(int arr[], const int);
//void PushBack(int arr[], int n);

//#define Push_Back
//#define Insert
#define Push_Front

//ѕриветствую ќлег,—пасибо за видео,от части немного пон€тно.но все же не смог сделать домашку.
//ћысли есть но реализовать не совсем понимаю как в виде кода.ѕопыталс€ не в функци€х написать.по индексам записать значение пон€тно,как в конец записать тоже пон€тно,а в начало массива ведь можно только через индекс?
//ј удаление значение массива € думаю реализуем спомощью удалени€ выделенной пам€ти?»бо оператор delete может удалить только указатель но не отдельное звено массива.
//Ѕуду ждать зан€ти€ ,мне инетересно все таки решение и разобратьс€ в этом...
void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "¬ведите число массивов:"; cin >> n;
	int* arr = new int[n] {};
	FillRand(arr, n);
	Print(arr, n);
    //PushBack(arr, n);
	//int value;
	//cout << "введите добавленное значение:"; cin >> value;

#ifdef Push_Back
	//1)—оздаем бу‘ерный массив нужного размера.
	int* buffer = new int[n + 1]{};
	//2)копируем все значени€ из исходного массива в буферный
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//3)ѕосле того как данные были скопированы,исходный массив можно удалить можно.
	delete[] arr;
	//4)ѕодмен€ем адресс в указателе на исходный массив:
	arr = buffer;
	//5)» только после всего этого можно записать новое значение в конец массива:
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
	arr[3] = value;//¬ставл€ет значение в массив по индексу,при замене индекса определ€ем в какую €чейку массиву запишем значение.
	n++;
#endif

#ifdef Push_Front
	int value;
	cout << "введите добавленное значение:"; cin >> value;
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
	cout << "введите добавленное значение:"; cin >> value;
	//1)—оздаем бу‘ерный массив нужного размера.
	int* buffer = new int[n + 1] {};
	//2)копируем все значени€ из исходного массива в буферный
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//3)ѕосле того как данные были скопированы,исходный массив можно удалить можно.
	delete[] arr;
	//4)ѕодмен€ем адресс в указателе на исходный массив:
	arr = buffer;
	//5)» только после всего этого можно записать новое значение в конец массива:
	arr[n] = value;
	n++;
}*/