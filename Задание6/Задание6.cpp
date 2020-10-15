// Задание6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	double a, b, c, x;
	cout << "Введите a=";
	cin >> a;
	cout << "Введите b=";
	cin >> b;
	cout << "Введите c=";
	cin >> c;
	if ((b * b - 4 * a * c) >= 0)
	{
		x = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
		cout << "x1=" << x << endl;
		x = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
		cout << "x2=" << x << endl;
	}
	else

	{
		cout << "Нет корней" << endl;
	}

	system("pause");

}
