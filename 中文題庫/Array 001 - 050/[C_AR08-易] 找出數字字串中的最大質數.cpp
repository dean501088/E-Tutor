#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#include<algorithm>

#define MAX 100001

using namespace std;

void initilize(bool prime[])
{
	//initialize boolean
	for (int i = 0; i < MAX; i++)
		prime[i] = true;

	prime[0] = false;

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

int transform(string s)
{
	int sum = 0;
	int last = s.length() - 1;

	for (int i = 0; i < s.length(); i++)
		sum += (s[i] - '0') * pow(10.0, last - i);

	return sum;
}

int main()
{
	bool prime[MAX];
	initilize(prime);

	string s;
	while (cin >> s)
	{
		vector<int> integer;

		for (int i = 1; i < s.length() + 1; i++)
		{
			for (int j = 0; j < s.length(); j++)
			{
				if (i + j < s.length() + 1)
				{
					string temp;
					temp = s.substr(j, i);
					integer.push_back(transform(temp));
				}
			}
		}
		sort(integer.begin(), integer.end());

		bool found = false;
		for (int i = integer.size() - 1; i > -1; i--)
		{
			if (prime[integer[i]])
			{
				cout << integer[i] << endl;
				found = true;
				break;
			}
		}

		if (!found)
			cout << "No prime found" << endl;
	}
	return 0;
}