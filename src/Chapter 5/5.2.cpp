// The following program takes in a temperature value in Celsius and converts it to Kelvin. This code has many errors in it.
// Find the errors, list them, and correct the code.
#include "..\std_lib_facilities.h"
double ctok(double c)
{
	if (c < -273.15) error(" Temp is below zero...\n");
	double k = c + 273.15;
	return k;
}
double ktoc(double k)
{
	if (k < 0) error(" Temp is below zero...\n");
	double c = k - 273.15;
	return c;
}


int main()
try
{
	double input;
	char unit;
	cout << "amount first unit second\n";
	while (cin >> input >> unit)
	{
		if (unit == 'c' || unit == 'C')
			cout << ctok(input) << endl;
		else if (unit == 'k' || unit == 'K')
			cout << ktoc(input) << endl;
	}
	system("pause");
}

catch (exception &e)
{
	cerr << "Error:" << e.what() << endl;
	return 1;
	system("pause");
}
catch (...)
{
	cerr << "Unknown exception.\n";
	return 2;
	system("pause");
}