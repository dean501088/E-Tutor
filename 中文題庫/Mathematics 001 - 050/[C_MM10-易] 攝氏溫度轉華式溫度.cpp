#include<iostream>  
 
using namespace std;

int main()
{
	double x;
	while (cin >> x)
	{
		printf("%.1f\n", (x * 9 / 5) + 32);
	}
	return 0;
}