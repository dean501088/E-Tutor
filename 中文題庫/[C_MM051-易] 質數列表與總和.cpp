#include<iostream>
#include<vector>

#define MAX 10001

using namespace std;

void initialize(bool prime[])
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
	bool temp[MAX];
	initialize(temp);
 
	vector<int> prime;
	for (int i = 2; i < MAX; i++)
		if (temp[i])
			prime.push_back(i);

	int n;
	while (cin >> n)
	{
		int sum = 0;

		for (int i = 0; i < n; i++)
		{
			cout << prime[i] << ",";
			sum += prime[i];
		}
		cout << "\n" << sum << endl;
	}
	return 0;
}