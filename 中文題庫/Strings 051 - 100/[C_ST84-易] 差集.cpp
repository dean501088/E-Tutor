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

	while (cin >> a[0] && cin.get(c))
	{
		int n = 1;
		for (; c != '\n'; n++)
		{
			cin >> a[n];
			cin.get(c);
		}

		int m = 1;
		cin >> b[0];
		cin.get(c);

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
		it = set_difference(a, a + n, b, b + m, v.begin());
		v.resize(it - v.begin());

		//output
		if (v.size() > 0)
		for (int i = 0; i < v.size(); i++)
		{
			if (i > 0)
				cout << " ";
			cout << v[i];
		}
		else
			cout << "null";
		cout << endl;
	}
	return 0;
}