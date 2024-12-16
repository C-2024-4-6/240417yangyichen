#include <iostream>
#include <iomanip>
#include "mytemperature.h"
using namespace std;
int main()
{
	cout << "Celsius" << "Fahrenheit"<<"|" << "Fahrenheit" << "Celsius" << endl;
	for (double x = 40.0, y = 120.0; x >= 31.0, y >= 30.0; x--, y=y-10)
	{
		cout << fixed << setprecision(1) << x << '\t' << fixed << setprecision(1) << celsius_to_fah(x) << '\t' << "|" <<
			'\t' << fixed << setprecision(1) << y << '\t' << fixed << setprecision(2) << fahrenheit_to_cels(y) << endl;
	}
	return 0;
}
