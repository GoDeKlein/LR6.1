#include <iostream>
#include<iomanip>
#define _USE_MATH_DEFINES
#include "math.h"
#include "windows.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int k, x;
	float Y;
	cout << "Введіть х: ";
	cin >> x;
	int sum = 0;
	for (k = 1; k <= 10; k++)
	{
		sum += sin(k * x);
	}
	Y = (sum + 2 * x) / (pow(x, 2) + 5);
	cout << "Y: " << Y << endl;
	system("pause");
}

/*#include <iostream>
#include<iomanip>
#define _USE_MATH_DEFINES
#include "math.h"
#include "windows.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int m, y;
	float Z;
	int X = 1;
	cout << "Введіть y: ";
	cin >> y;
	for (m = 1; m <= 10; m++)
	{
		X *= log(m * y);
	}
	Z = 3 * sin(y) + X;
	cout << "Z: " << Z << endl;
	system("pause");
}*/