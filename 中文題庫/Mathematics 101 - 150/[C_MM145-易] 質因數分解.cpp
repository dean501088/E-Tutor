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

	while (cin >> n)
	{	
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
		
		vector<obj> output;

		for (int i = 0; i < list.size(); i++)
		{
			if (list[i].count > 0)
				output.push_back(list[i]);
		}

		for (int i = 0; i < output.size(); i++)
		{
			cout << output[i].num;

			if (list[i].count > 1)
				cout << "^" << output[i].count;

			if (i < output.size() - 1)
				printf(" * ");
		}
		printf("\n");
	}
	return 0;
}