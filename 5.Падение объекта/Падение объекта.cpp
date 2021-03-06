﻿// Падение объекта.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double X0,V0,t,Xt;// Лучше выбрать тип параметров double, потому что параметры могут иметь дробный ввид.
    double const g = 9.8;
	cout << "Введите  через пробел X0, V0, t:" << endl;
	cin >> X0 >> V0 >> t;

	if (t > 0) {
		Xt = V0 + X0 * t + 1.f/2* g * t * t;
		cout << "X(t)  =  " << Xt << endl;
	}
	else {
		cout << "Время не может быть отрицательным! " << endl;
	}
	// С точки зрения математики разници между a*t*t / 2 и 1/2*a*t*t нет, с точки зрения программирования разница есть,
	//ведь операция 1/2 делить единицу на два и приводит результат этого деления к типу int из - за чего 1/2 = 0(int округляет до меньшего целого),
	//поэтому результат вычислений становиться не правильным.
	

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
