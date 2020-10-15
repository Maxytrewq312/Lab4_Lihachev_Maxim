// Задание2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double A;
	double B;
	cout << "Введите 1 положительное число(A): ";
	cin >> A;
	cout << "Введите 2 положительное число(B): ";
	cin >> B;                   
	if (A > 0 && B > 0)
	{
		if(A != 0)
		{
			double x = B / A;
			cout << "Корень уравнения вида Ax = B: " << x << endl;
		}
		else
		{
			cout << "У данного уравнения нет решений. На ноль делить нельзя" << endl;
		}
	}
	else
	{
		cout << "Необходимо ввести 2 положительных числа." << endl;
	}
	system("pause");
}