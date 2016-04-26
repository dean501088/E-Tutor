#include<iostream>

using namespace std;

int main()
{
	int q;
	while (cin >> q)
	{
		while (q--)
		{
			int m, n;
			cin >> m >> n;

			int x[10][10] = { 0 };
			int y[10][10] = { 0 };

			//input
			for (int i = 0; i < m; i++)
				for (int j = 0; j < n; j++)
					cin >> x[i][j];

			for (int i = 0; i < m; i++)
				for (int j = 0; j < n; j++)
					cin >> y[i][j];
			
			//calculate
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					cout << x[i][j] * y[i][j];

					if (j < n - 1)
						cout << " ";
				}
				cout << endl;
			}
		}
	}
	return 0;
}