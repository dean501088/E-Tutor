#include<iostream>  

using namespace std;

int main()
{
	double x;
	while (cin >> x)
	{
		x *= x;
		x *= 10;
		x += 0.5;

		printf("%.1f\n", x / 10);
	}
	return 0;
}