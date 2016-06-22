#include<iostream>
#include<cmath>

#define PI atan(1)*4

using namespace std;

int main()
{
	double n;
	while (cin >> n)
	{
		n /= 2;
		n *= n;
		n /= PI;

		n *= 1000000;
		n += 0.5;
		n = floor(n);
		n /= 1000000;

		printf("%.6lf\n", n);
	}
	return 0;
}