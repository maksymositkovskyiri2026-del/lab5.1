// Осітковський Максим
// Лабораторна робота № 5.1
// Функції, що містять арифметичний вираз
// Варіант 19

#include <iostream>
#include <cmath>

using namespace std;

double h(const double a, const double b);

int main()
{
	double g, s;

	cout << "g = "; cin >> g;
	cout << "s = "; cin >> s;

	double c = (h(g + 1, s) + pow(h(g, s + 1), 2)) / (1 + pow(h(g * g, s * s), 3));

	cout << "c = " << c << endl;

	return 0;
}

double h(const double a, const double b)
{
	return (pow(a, 2) - pow(b, 2));
}