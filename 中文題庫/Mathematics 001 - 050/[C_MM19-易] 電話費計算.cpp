#include<iostream>  
 
using namespace std;

int main()
{
	double x;
	while (cin >> x)
	{
		double y = x * 0.9;

		if (x > 800 && x < 1500)
			y *= 0.9;
		if (x > 1499)
			y *= 0.79;
		printf("%.1f\n", y);
	}
	return 0;
}