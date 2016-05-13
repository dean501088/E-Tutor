#include<iostream>
#include<vector>
#include<cmath>

#define MAX 100001

using namespace std;

void initilize(bool prime[])
{
	//initialize boolean
	prime[0] = false;
	prime[1] = true;
	for (int i = 2; i < MAX; i++)
		prime[i] = true;

	for (int i = 2; i < MAX; i++)
	{
		if (prime[i])
		{
			for (int j = i * 2; j < MAX; j += i)
			{
				prime[j] = false;
			}
		}
	}
}

int main()
{
	bool prime[MAX];
	initilize(prime);

	bool reverse[MAX];

	for (int i = 0; i < MAX; i++)
	{
		if (!prime[i])
		{
			reverse[i] = false;
		}
		else
		{
			vector<int> bit;
			int temp = i;

			while (temp > 0)
			{
				bit.push_back(temp % 10);
				temp /= 10;
			}

			for (int i = 0; i < bit.size(); i++)
			{
				double exp = (double)bit.size() - 1 - i;
				temp += bit[i] * pow(10.0, exp);
			}
			if (prime[temp])
				reverse[i] = true;
			else
				reverse[i] = false;
		}
	}

	int n;
	while (cin >> n)
	{
		for (int i = 2, j = 0; i < MAX, j < n; i++)
		{
			if (reverse[i])
			{
				printf("%d\n", i);
				j++;
			}
		}
	}
	return 0;
}