﻿// ТОП - 5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	/*int n, counter = 0;
	bool t = false;
	cin >> n;
	int *arr2 = new int [n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr2[i];
	}
	int g;
	for ( g = 0; g < n; g++) {
		for (int i = g; i > 0; i--)
		{
			if (arr2[i] < arr2[i - 1]) {
				swap(arr2[i], arr2[i - 1]);
			}
			else break;
		} 

		for (int b = (g<4)?g:4; b >= 0; b--) {
			cout << arr2[b] << " ";
		}
		cout << endl;
	}
	delete[]arr2;
	*/
	int n, a, b, c, d, r;
	
	cin >> n;
	for (int  i = 0; i < n; i++)
	{
		if (i == 0) {
			cin >> a;
	}
		else if (i == 1) {
			cin >> b;

		}
		else if (i == 2) {
			cin >> c;

		}
		else if (i == 3) {
			cin >> d;

		}
		else if (i == 4) {
			cin >> r;

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
