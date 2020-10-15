// Lab4_Lihachev_Maxim.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int a;
	cout << "Введите ваше число: ";
	cin >> a;
	cout << "Числа, на которые делится ваше число: " << endl;
	for (int i = 1; i <= 1000; i++)
	{
		if (a % i == 0)
		{
			cout << i <<  endl;
		}
	}
	system("pause");
}