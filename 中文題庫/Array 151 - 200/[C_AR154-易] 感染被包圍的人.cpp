#include<iostream>
#include<fstream>

using namespace std;

bool isInfect(int x, int y, char c[][9])
{
	return c[x - 1][y] == 'X'
		&& c[x + 1][y] == 'X'
		&& c[x][y - 1] == 'X'
		&& c[x][y + 1] == 'X';
}

int main()
{
	//initialize
	char c[9][9];
	for (int i = 0; i < 9; i++)
	for (int j = 0; j < 9; j++)
		c[i][j] = 0;

	//input
	for (int i = 1; i < 8; i++)
	for (int j = 1; j < 8; j++)
	{
		cin >> c[i][j];
		cin.get();
	}

	//output
	for (int i = 1; i < 8; i++)
	for (int j = 1; j < 8; j++)
	{
		if (j > 1) 
			cout << " ";
		if (c[i][j] == '0'
			&& isInfect(i, j, c))
			c[i][j] = 'I';

		cout << c[i][j];

		if (j == 7 && i < 7)
			cout << endl;
	}
	return 0;
}