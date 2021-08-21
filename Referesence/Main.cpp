#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int a = 2;
	int& ra=a;
	ra += 3;
	cout << a << endl;
    cout << ra << endl;
	cout << &a << endl;//берет адрес	
    cout << &ra << endl;//сначала разименовывает,а потом берет адрес значения
}