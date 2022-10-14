// Lab_03_3.cpp
// < Казимир Богдан >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 10
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (x <= -8 - R)
		y = R;
	else
		if (-8 - R < x && x <= -8 + R)
			y = R + sqrt(R * R - (x + 8) * (x + 8));
		else
			if (-8 + R < x && x <= -4)
				y = R;
			else
				if (-4 < x && x <= 0)
					y = R + (-R / 4) * (x + 4);
				else
					if (0 < x && x <= 2)
						y = -x;
					  else y = 2 - x;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}