#include<iostream>

using namespace std;

int main()
{
	double x, y, h;
	cin >> x >> y >> h;
	
	double area = (x + y) * h / 2;
	printf("Trapezoid area:%.1f\n", area);
	return 0;
}