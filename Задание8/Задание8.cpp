// Задание8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <clocale>
#include <algorithm>
using namespace std;

int main()
{
    setlocale(0, "");
    srand(time(0));
    int* a;
    int n;
    cout << "Введите количество символов массива: ";
    cin >> n;
    a = new int[n];
    cout << "Исходный массив: " << endl;
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 20;
        std::cout << a[i] << " ";
    }
    sort(a, a + n);
    cout << "\nОтсортированный массив: " << endl;
    for (int i = n - 1; i >= 0; i--)
    { 
        cout << a[i] << " ";
    }
    delete[]a; 
    system("pause");
}
