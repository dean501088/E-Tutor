#include<iostream>  
 
using namespace std;

int main()
{
	double x, y;
	while (cin >> x >> y)
	{
		printf("%.1f\n", x*y / 2);
	}
	return 0;
}