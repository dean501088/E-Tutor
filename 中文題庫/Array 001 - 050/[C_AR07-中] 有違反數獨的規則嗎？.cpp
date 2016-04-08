#include<iostream>

using namespace std;

int main()
{
	int sudo[9][9];

	int valid = true;

	//input
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{	
			char c;
			cin.get(c);
			sudo[i][j] = c - '0';
		}
		cin.get();
	}

	//check
	for (int i = 0; i < 9; i++)
	{
		int row[9] = { 0 };

		for (int j = 0; j < 9; j++)
		{
			if (sudo[i][j] != 0)
			{
				//row
				if (row[sudo[i][j] - 1] == 1)
				{
					cout << "row" << i + 1;
					cout << " #" << sudo[i][j] << endl;
					
					valid = false;
					break;
				}
				row[sudo[i][j] - 1]++;
			}
		}
	}

	for (int i = 0; i < 9; i++)
	{
		bool col[9] = { false };

		for (int j = 0; j < 9; j++)
		{
			if (sudo[j][i] != 0)
			{
				//col
				if (col[sudo[j][i] - 1] == 1)
				{
					cout << "column" << i + 1;
					cout << " #" << sudo[j][i] << endl;
					
					valid = false;
					break;
				}
				col[sudo[j][i] - 1]++;
			}
		}
	}

	for (int i = 0; i < 9; i++)
	{
		int block[9] = { 0 };

		int x = (i / 3) * 3;
		int y = (i % 3) * 3;

		for (int j = 0; j < 9; j++)
		{
			int a = j / 3;
			int b = j % 3;

			if (sudo[x + a][y + b] != 0)
			{
				//block
				if (block[sudo[x + a][y + b] - 1] == 1)
				{
					cout << "block" << i + 1;
					cout << " #" << sudo[x + a][y + b];
					cout << endl;
					
					valid = false;
					break;
				}
				block[sudo[x + a][y + b] - 1]++;
			}
		}
	}

	if (valid)
		cout << "true" << endl;

	return 0;
}