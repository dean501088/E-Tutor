#include<iostream>
#include<set>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	//variables
	char c;
	int a[100];
	int b[100];

	int k;
	while (cin >> k)
	while (k--)
	{
		//input
		int n = 0;
		int m = 0;

		c = ' ';
		for (; c != '\n'; n++)
		{
			cin >> a[n];
			cin.get(c);
		}

		c = ' ';
		for (; c != '\n'; m++)
		{
			cin >> b[m];
			cin.get(c);
		}

		sort(a, a + n);
		sort(b, b + m);

		//intersection array
		vector<int> v;
		for (int i = 0; i < 100; i++)
			v.push_back(0);

		vector<int>::iterator it;
		it = set_intersection(a, a + n, b, b + m, v.begin());
		v.resize(it - v.begin());

		//output
		if (v.size() == min(n, m))
		{
			if (n < m)
				cout << 1 << endl;
			else if (n > m)
				cout << 2 << endl;
			else
				cout << 3 << endl;
		}
		else if (v.size() > 0)
			cout << 5 << endl;
		else
			cout << 4 << endl;
	}
	return 0;
}