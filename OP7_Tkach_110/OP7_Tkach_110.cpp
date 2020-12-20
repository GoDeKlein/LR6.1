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

