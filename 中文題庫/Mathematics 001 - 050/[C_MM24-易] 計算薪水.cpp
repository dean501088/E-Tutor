#include<iostream>

using namespace std;

int main()
{
	double n, m;
	while (cin >> n >> m)
	{
		double ans = 0;
		
		if (n <= 60)
			ans = n * m;
		else if (n <= 120)
		{
			ans += 60 * m;
			ans += (n - 60) * m;
		}
		else
		{
			ans += 60 * m;
			ans += 60 * 1.33 * m;
			ans += (n - 120) * 1.66 * m;
		}
		printf("%.1lf\n", ans);
	}
	return 0;
}