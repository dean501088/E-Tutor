#include<iostream>
#include<string>

using namespace std;

void copy(int x[][100], int y[][100])
{
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
			y[i][j] = x[i][j];
	}
}

void updown(int cube[][100], int n)
{
	//backup
	int temp[100][100] = { 0 };
	copy(cube, temp);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cube[i][j] = temp[n - 1 - i][j];
		}
	}
}

void right(int cube[][100], int n)
{
	updown(cube, n);

	int temp[100][100] = { 0 };
	copy(cube, temp);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cube[i][j] = temp[j][i];
		}
	}
}

void left(int cube[][100], int n)
{
	updown(cube, n);

	int temp[100][100] = { 0 };
	copy(cube, temp);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cube[i][j] = temp[n - 1 - j][n - 1 - i];
		}
	}
}

int main()
{
	int m;
	while (cin >> m && (m > 0 && m < 15))
	{
		while (m--)
		{
			int n; cin >> n;
			if (!(n > 0 && n < 11))
				break;

			cin.get();
			
			//initilization
			int cube[100][100] = {0};
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					cube[i][j] = i * n + j + 1;
				}
			}

			string s; 
			getline(cin, s);

			for (int i = 0; i < s.length(); i++)
			{
				if (s[i] == 'R')
					right(cube, n);
				else if (s[i] == 'L')
					left(cube, n);
				else
					updown(cube, n);
			}

			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					cout << cube[i][j];
					
					if (j < n - 1) cout << " ";
				}
				cout << endl;
			}
			if (m > 0)
				cout << endl;
		}
	}
	return 0;
}