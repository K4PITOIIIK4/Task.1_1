﻿// Площадь треугольника.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	for (;;) 
	{
		int chek;
		double S, a, b, c, p;
		cout << "Введите 1 для случая ввода параметров треугольника через длины сторон. Введите 2 для случая ввода параметров через координаты вершин." << endl;
		cin >> chek;
		if (chek == 1) {
			cout << "Введите сторону а:";
			cin >> a;
			cout << "Введите сторону b:";
			cin >> b;
			cout << "Введите сторону с:";
			cin >> c;
			if ((a + b > c) && (a + c > b) && (b + c > a))
			{
				p = (a + b + c) / 2;
				S = sqrt(p * (p - a) * (p - b) * (p - c));
				cout << "S = " << S << endl;
			}
			else {
				cout << "Такой треугольник не может существовать!" << endl;
			}
		}
		else if (chek == 2)
		{
			int X1, X2, Y1, Y2, X3, Y3;
			cout << "Введите координаты точки А: ";
			cin >> X1 >> Y1;
			cout << "Введите координаты точки B: ";
			cin >> X2 >> Y2;
			cout << "Введите координаты точки С: ";
			cin >> X3 >> Y3;
			a = sqrt(pow((X2 - X1), 2) + pow((Y2 - Y1), 2));
			b = sqrt(pow((X3 - X2), 2) + pow((Y3 - Y2), 2));
			c = sqrt (pow((X1 - X3), 2) + pow((Y1 - Y3), 2));
			if ((a + b > c) && (a + c > b) && (b + c > a))
			{
				p = (a + b + c) / 2;
				S = sqrt(p * (p - a) * (p - b) * (p - c));
				cout << "S = " << S << endl;
			}
			else {
				cout << "Такой треугольник не может существовать!" << endl;
			}
		}
		else {
			cout << "Ошибка! Вы выбрали не существующий пункт в меню! " << endl;
		}
		cout << "Хотите продолжить?" << endl;
		string antworten;
		cin >> antworten;
		if (antworten == "No"||antworten == "no")
		{
			break;
		}
		else if (antworten == "Yes" || antworten == "yes"){

		}
		else
        {
			cout << "Ощибка! Неверный ответ! ";
			return 0;
        }
	    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
