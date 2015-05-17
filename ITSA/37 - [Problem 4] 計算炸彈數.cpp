#include<iostream>

using namespace std;

int main()
{
	bool field[11][11] = { 0 };

	int n; cin >> n;
	for (int i = 1; i < n + 1; i++)
	{
		for (int j = 1; j < n + 1; j++)
		{
			cin >> field[i][j];
		}
	}

	int table[11][11] = { 0 };
	for (int i = 1; i < n + 1; i++)
	{
		for (int j = 1; j < n + 1; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				//up
				if (field[i - 1][j - 1 + k])
					table[i][j]++;
				//down
				if (field[i + 1][j - 1 + k])
					table[i][j]++;
			}
			//left
			if (field[i][j - 1])
				table[i][j]++;
			//right
			if (field[i][j + 1])
				table[i][j]++;
		}
	}
	//output
	for (int i = 1; i < n + 1; i++)
	{
		for (int j = 1; j < n + 1; j++)
		{
			if (!field[i][j])
				cout << table[i][j];
			else
				cout << "0";

			if (j < n)
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}