#include "..\std_lib_facilities.h"
vector<int> s;
int sum;
int main()
try
{
	double n = -1; int i = -1; int v;
	cout << "Please enter the number of values you want to sum:\n";
	cin >> n;
	i = n;
	if (i != n) error(" Number isn't an int!");
	if (n < 1) error(" Number can't be below 1!");
	cout << "Now enter some numbers. Press x if when you're done.\n";
	while (cin >> v) {
		s.push_back(v);
	}
	if (n > s.size()) error(" Amount is more than the size of elements.\n");
	for (int i = 0; i < n; i++) sum += s[i];
	cout << "Sum of " << n << " numbers are: " << sum << endl;
	keep_window_open();
}

catch (exception &e)
{
	cerr << "Error:" << e.what() << endl;
	return 1;
	keep_window_open();
}
catch (...)
{
	cerr << "Unknown exception.\n";
	return 2;
	keep_window_open();
}