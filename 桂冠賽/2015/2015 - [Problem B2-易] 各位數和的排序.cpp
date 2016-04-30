#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;

class digit
{
	public:
		int integer;
		int sum;
		string s;

		digit(string var)
		{
			s = var;
			initilize();
		}

		void initilize()
		{
			integer = 0;
			sum = 0;

			for (int i = 0; i < s.length(); i++)
			{
				int power = s.length() - 1 - i;
				int num = s[i] - '0';

				integer += num * pow(10.0, power);
				sum += num;
			}
		}

		bool operator <(const digit &x) const
		{
			if (sum != x.sum)
				return sum < x.sum;
			else
				return integer < x.integer;
		}
};

int main()
{
	int n;
	while (cin >> n)
	{
		while (n--)
		{
			vector<digit> d;
			int m; cin >> m;

			while (m--)
			{
				string temp; cin >> temp;
				d.push_back(digit(temp));
			}
			sort(d.begin(), d.end());

			for (int i = 0; i < d.size(); i++)
			{
				cout << d[i].s;
				if (i < d.size() - 1)
					cout << " ";
			}
			cout << endl;
		}
	}
	return 0;
}