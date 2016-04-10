#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	string x, y;

	while (cin >> x >> y)
	{
		int a[32] = { 0 };
		int b[32] = { 0 };

		//string to digit
		for (int i = 0; i < x.length(); i++)
			a[31 - i] = x[x.length() - 1 - i] - '0';
		for (int i = 0; i < y.length(); i++)
			b[31 - i] = y[y.length() - 1 - i] - '0';

		int ans[32] = { 0 };

		//add
		for (int i = 0; i < 32; i++)
			ans[i] = a[i] + b[i];

		for (int i = 0; i < 31; i++)
		{
			ans[30 - i] += ans[31 - i] / 7;
			ans[31 - i] %= 7;
		}

		bool print = false;

		for (int i = 0; i < 32; i++)
		{
			if (!print && ans[i] != 0)
			{
				print = true;
			}

			if (print)
				cout << ans[i];
		}
		cout << endl;
	}
	return 0;
}