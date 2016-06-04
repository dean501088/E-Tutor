#include<iostream>
#include<vector>
#include<cmath>

#define MAX 10000001

using namespace std;

class obj
{
	public:
		obj(long long x, int y)
			:num(x), count(y) {}
		obj(long long var)
			:num(var) {}
		obj() {}
		long long num;
		int count;
};

bool prime[MAX];

void initilize()
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
	//initialize prime
	initilize();

	vector<obj> list;

	for (int i = 2; i < MAX; i++)
	{
		if (prime[i])
			list.push_back(obj(i));
	}

	long long n;

	while (cin >> n && n)
	{	
		long long m = n;

		//initialize count
		for (int i = 0; i < list.size(); i++)
			list[i].count = 0;

		for (int i = 0; i < list.size(); i++)
		{
			while (true)
			{
				if (n % list[i].num == 0)
				{
					n /= list[i].num;
					list[i].count++;
				}
				else
					break;
			}
			if (n == 1)
			{
				break;
			}
		}
		
		vector<obj> ou;

		for (int i = 0; i < list.size(); i++)
		{
			if (list[i].count > 0)
				ou.push_back(list[i]);
		}

		cout << m << "=";

		if (m == 1)
			cout << 1;

		for (int i = 0; i < ou.size(); i++)
		{
			cout << ou[i].num;

			for (int j = 0; j < ou[i].count - 1; j++)
				cout << "*" << ou[i].num;

			if (i < ou.size() - 1)
				printf("*");
		}
		printf("\n");
	}
	return 0;
}