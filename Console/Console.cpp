#include <iostream>
#include <Windows.h>
#include <locale>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	double x1, y1;
	cout << "Введите координат первого точки: ";
	cin >> x1 >> y1;
	double x2, y2;
	cout << "Введите координат второго точки: ";
	cin >> x2 >> y2;
	double x3, y3;
	cout << "Введите координат третьего точки: ";
	cin >> x3 >> y3;

	double a = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	double b = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	double c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	double p = (a + b + c) / 2;
	double S = sqrt(abs(p) * abs(p - a) * abs(p - b) * abs(p - c));
	cout << "Периметр треугольника: " << 2*p << endl;
	cout << "Площадь треугольника: " << S << endl;
	double alp = acos((float)(b*b+c*c-a*a)/(2*b*c)) * 180/3.1418;
	double beta = acos((float)(a * a + b * b - c * c) / (2 * b * a)) * 180 / 3.1418;
	double gamme = 180 - alp - beta;
	cout << "Первый угол: " << alp << endl;
	cout << "Второй угол: " << beta << endl;
	cout << "Третий угол: " << gamme << endl;

	system("pause");
	return 0;
}
