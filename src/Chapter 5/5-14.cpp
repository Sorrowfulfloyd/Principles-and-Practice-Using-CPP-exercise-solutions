#include <\MinGW\include\std_lib_facilities.h>
//Read(day-of-the-week, value) pairs from input.
//For example:
//Tuesday 23 Friday 56 Tuesday –3 Thursday 99
//Collect all the values for each day of the week in a vector<int>.Write out the values of the seven day - of - the - week
//vectors.Print out the sum of the values in each vector.Ignore illegal days of the week, such as Funday, but accept
//common synonyms such as Mon and monday.Write out the number of rejected values.

vector<int> mond;
vector<int> tues;
vector<int> wedn;
vector<int> thur;
vector<int> fri;
vector<int> sat;
vector<int> sun;
int reject = 0;
bool stop = false;

void collect(string x, int a)
{
	if (x == "Monday" || x == "monday" || x == "mon" || x == "Mon")
	{
		mond.push_back(a);
	}
	else if (x == "Tuesday" || x == "tuesday" || x == "tue" || x == "Tue")
	{
		tues.push_back(a);
	}
	else if (x == "Wednesday" || x == "wednesday" || x == "wed" || x == "Wed")
	{
		wedn.push_back(a);
	}
	else if (x == "Thursday" || x == "thursday" || x == "thu" || x == "thu")
	{
		thur.push_back(a);
	}
	else if (x == "Friday" || x == "friday" || x == "fri" || x == "Fri")
	{
		fri.push_back(a);
	}
	else if (x == "Saturday" || x == "saturday" || x == "sat" || x == "Sat")
	{
		sat.push_back(a);
	}
	else if (x == "Sunday" || x == "sunday" || x == "sun" || x == "Sun")
	{
		sun.push_back(a);
	}
	else reject++;
}

int getsum(vector<int> v)
{
	int sum = 0;
	for (int i = 0; i < v.size(); ++i) sum += v[i];
	return sum;
}

void print_day(string a, vector <int> v)
{
	cout << a << ": " << getsum(v) << endl;
}
void print()
{
	print_day("Monday", mond);
	print_day("Tuesday", tues);
	print_day("Wednesday", wedn);
	print_day("Thursday", thur);
	print_day("Friday", fri);
	print_day("Saturday", sat);
	print_day("Sunday", sun);
	cout << reject << " values rejected.\n";
}
int main()
try {
	string day = " ";
	int in;
	while (cin >> day >> in) {
		collect(day, in);
		print();
		if (!cin)
			return 1;
	}
	error("Invalid Input\n");
}

catch (exception& e) {
    cerr << "Error: " << e.what() << endl;
    keep_window_open();
    return 1;
}
catch (...) {
    cerr << "Unknown exception!\n";
    return 2;
}