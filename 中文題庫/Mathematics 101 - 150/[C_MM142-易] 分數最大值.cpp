#include<iostream>

using namespace std;

int gcd(int x, int y)
{
	while (true)
	{
		if (y % x == 0)
			return x;
		else
			y %= x;
		if (x % y == 0)
			return y;
		else
			x %= y;
	}
}

int main()
{
	int n;
	
	while (cin >> n)
	{
		double x, y;
		double max = 0;

		while (n--)
		{
			double a, b;
			cin >> a >> b;

			if (a / b > max)
			{
				max = a / b;
				x = a;
				y = b;
			}
		}
		int fix = gcd(x, y);

		printf("%.f %.f\n", x / fix, y / fix);
	}
	return 0;
}