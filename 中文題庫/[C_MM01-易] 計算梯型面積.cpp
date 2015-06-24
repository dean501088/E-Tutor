#include<iostream>  

using namespace std;

int main()
{
	double x, y, z;
	while (cin >> x >> y >> z)
	{
		printf("Trapezoid area:");
		printf("%.1f\n", (x + y)*z / 2);
	}
	return 0;
}