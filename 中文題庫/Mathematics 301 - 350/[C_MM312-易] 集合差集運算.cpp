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
	
		cin >> b[0];
		cin.get(c);

		int m = 1;
		for (; c != '\n'; m++)
		{
			cin >> b[m];
			cin.get(c);
		}

		//backup
		int ba[100];
		for (int i = 0; i < n; i++)
			ba[i] = a[i];
		int bb[100];
		for (int i = 0; i < m; i++)
			bb[i] = b[i];

		sort(a, a + n);
		sort(b, b + m);

		//intersection array
		vector<int> v, w;
		for (int i = 0; i < 100; i++)
		{
			v.push_back(0);
			w.push_back(0);
		}

		vector<int>::iterator it;
		it = set_difference(a, a + n, b, b + m, v.begin());
		v.resize(it - v.begin());
		it = set_difference(b, b + m, a, a + n, w.begin());
		w.resize(it - w.begin());
		
		bool first;

		//output
		first = true;
		if (v.size() == 0)
			cout << "null";
		else
		for (int i = 0; i < n; i++)
		for (int j = 0; j < v.size(); j++)
		if (ba[i] == v[j])
		{
			if (!first)
				cout << " ";
			first = false;

			v.erase(v.begin() + j);
			cout << ba[i];
			break;
		}
		cout << endl;

		first = true;
		if (w.size() == 0)
			cout << "null";
		else
		for (int i = 0; i < m; i++)
		for (int j = 0; j < w.size(); j++)
		if (bb[i] == w[j])
		{
			if (!first)
				cout << " ";
			first = false;

			w.erase(w.begin() + j);
			cout << bb[i];
			break;
		}
		cout << endl;
	}	
	return 0;
}