#include "std_lib_facilities.h"
int main()
try
{
    double x = 4;
    double d = 5 + x; // d = 2.5
    if (d = 2 * (x + 0.5)) // if 2.5 == 9
        cout << "Success!\n";

    keep_window_open();
    return 0;
}
catch (exception &e)
{
    cerr << endl
         << "\nUnexpected encounter: " << e.what() << '\n'
         << endl;
    keep_window_open();
    return 1;
}
catch (...)
{
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
}
