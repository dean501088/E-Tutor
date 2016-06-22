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
	int temp;

	while (cin >> temp)
	{
		vector<int> num;
		num.push_back(temp);

		char c; cin.get(c);

		while (c != '\n')
		{
			cin >> temp;
			num.push_back(temp);

			cin.get(c);

			if (c == '\n')
				break;
		}

		int fix = gcd(num[0], num[1]);
		int ans = num[0] * num[1] / fix;
		
		for (int i = 2; i < num.size(); i++)
		{
			fix = gcd(num[i], ans);
			ans = num[i] * ans / fix;
		}

		printf("Lowest common multiple: ");
		printf("%d\n", ans);
	}
	return 0;
}