#include<iostream>

using namespace std;

int main()
{
	int m;
	
	while (cin >> m)
	{
		while (m--)
		{
			int n, s;
			cin >> n >> s;

			//initialize
			char castle[9][9];
			for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				castle[i][j] = 'x';

			if (s == 1)
			{
				for (int i = 0; i < n; i++)
				{
					castle[i][n - 1 - i] = '*';
				}
			}
			else if (s == 2)
			{
				for (int i = 0; i < n; i++)
				{
					castle[i][i] = '*';
				}
			}
			else if (s == 3)
			{
				for (int i = 0; i < n; i++)
				{
					castle[i][n - 1] = '*';
				}
			}
			else if (s == 4)
			{
				for (int i = 0; i < n; i++)
				{
					castle[i][0] = '*';
				}
			}

			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					cout << castle[i][j];

					if (j < n - 1)
						cout << " ";
				}
				cout << endl;
			}
		}
	}
	return 0;
}