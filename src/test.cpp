#include <iostream>
#include <cstdio>
using namespace std;
int a;
long b;
char c;
float d;
double e;
int main()
{
	scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
	printf("%d %ld %c %f %lf", a, b, c, d, e);
	system("pause");
}