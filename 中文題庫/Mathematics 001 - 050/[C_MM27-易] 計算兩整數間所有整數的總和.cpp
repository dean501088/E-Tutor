#include<iostream>  
#include<cmath>

using namespace std;

int main()
{
	int x, y;
	while (cin >> x >> y)
	{
		int z = x + y;
		z *= abs(x - y) + 1;
		z /= 2;
		printf("%d\n", z);
	}
	return 0;
}