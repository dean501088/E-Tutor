#include<iostream>

using namespace std;

int main()
{
	int p;
	while (cin >> p && p)
	{
		while (p--)
		{
			int n, m, l;
			cin >> n >> m >> l;

			bool classmate[22][22] = { false };
			bool temp[22][22] = { false };

			while (l--)
			{
				int x, y; cin >> x >> y;
				temp[x][y] = true;
				classmate[x][y] = true;
			}

			for (int i = 1; i < n + 1; i++)
			{
				for (int j = 1; j < m + 1; j++)
				{
					for (int k = j - 1; k < 3; k++)
					{
						//up
						if (temp[i - 1][k])
							classmate[i][j] = true;
						//down
						if (temp[i + 1][k])
							classmate[i][j] = true;
					}
					if (temp[i][j - 1])
						classmate[i][j] = true;
					if (temp[i][j + 1])
						classmate[i][j] = true;
				}
			}
			
			int check = 0;
			for (int i = 1; i < n + 1; i++)
			{
				for (int j = 1; j < m + 1; j++)
				{
					if (classmate[i][j])
						check++;
				}
			}	
			if (check == n * m)
				cout << "Y" << endl;
			else
				cout << "N" << endl;
		}
	}
	return 0;
}