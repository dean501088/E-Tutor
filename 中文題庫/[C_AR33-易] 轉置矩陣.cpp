#include<iostream>

using namespace std;

int main()
{
	int m, n;
	while (cin >> m >> n)
	{
		if (!m && !n)
			break;

		int arr[100][100];

		//input
		for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];
		
		//output
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cout << arr[j][i];

				if (j < m - 1)
					cout << " ";
			}
			cout << endl;
		}
	}
	return 0;
}