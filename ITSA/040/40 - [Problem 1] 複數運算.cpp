#include<iostream>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		while (n--)
		{
			char c;
			cin >> c;

			int x[2], y[2];
			cin >> x[0] >> x[1];
			cin >> y[0] >> y[1];

			int z[2];

			if (c == '+')
			{
				z[0] = x[0] + y[0];
				z[1] = x[1] + y[1];
			}
			else if (c == '-')
			{
				z[0] = x[0] - y[0];
				z[1] = x[1] - y[1];
			}
			else if (c == '*')
			{
				z[0] = 0;
				z[0] += x[0] * y[0];
				z[0] -= x[1] * y[1];

				z[1] = 0;
				z[1] += x[0] * y[1];
				z[1] += x[1] * y[0];
			}
			cout << z[0] << " " << z[1] << endl;
		}
	}
	return 0;
}