#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	string s[10];


	for (int i = 0; i < 10; i++)
		cin >> s[i];

	int n;
	while (cin >> n)
	{
		while (n--)
		{
			int m; cin >> m;

			vector<char> c;
			
			while (m--)
			{
				int x, y;
				cin >> x >> y;

				c.push_back(s[x][y]);
			}

			for (int i = 0; i < c.size(); i++)
				cout << c[i];
			cout << endl;
		}
	}
	return 0;
}