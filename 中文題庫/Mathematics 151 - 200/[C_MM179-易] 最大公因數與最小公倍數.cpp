#include<iostream>
#include<vector>

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
	int a, b;

	while (cin >> a >> b)
	{
		int fix = gcd(a, b);
		int lcm = a * b / fix;
		int g = fix;
		
		for (int i = 0; i < 2; i++)
		{
			cin >> a;

			//gcd
			g = gcd(g, a);

			fix = gcd(lcm, a);
			lcm = lcm * a / fix;
		}

		printf("%d %d\n", g, lcm);
	}
	return 0;
}