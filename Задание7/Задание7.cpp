// Задание7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	int l;
	do
	{
		setlocale(0, "");
		double a;
		double f = 1;
		cout << "Введите число=";
		cin >> a;

		for (a; a > 0; a--)
		{
			f *= a;

		}
		cout << "Факториал равен=" << f << endl;
		cout << "Продолжить? Введите числа: 0 - нет, 1 - да" << endl;
		cin >> l;

	} while (l != 0);


}
