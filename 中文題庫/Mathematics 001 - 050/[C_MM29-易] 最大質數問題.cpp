#include<iostream>

#define MAX 10001

using namespace std;

void initilize(int prime[])
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
	int prime[MAX];
	initilize(prime);
	
	int n;
	while (cin >> n)
	{
		for (int i = n - 1; i > -1; i--)
		{
			if (prime[i])
			{
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}