#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int input[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> input[i][j];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (input[i][j] == 1)
				cout << "Y";
			else if (input[i][j] == 2)
				cout << "X";
			else if (input[i][j] == 0)
				cout << "*";
		}
		cout << endl;
	}

	int winner = 0;

	for (int i = 0; i < 3; i++)
	{
		//vertical
		if (input[0][i] == input[1][i]
			&& input[0][i] == input[2][i])
		{
			if (input[0][i] == 1)
				winner = 1;
			else if (input[0][i] == 2)
				winner = 2;
		}

		//horizen
		if (input[i][0] == input[i][1]
			&& input[i][2] == input[i][2])
		{
			if (input[i][0] == 1)
				winner = 1;
			else if (input[i][0] == 2)
				winner = 2;
		}	
	}

	//other
	if (input[0][0] == input[1][1]
		&& input[0][0] == input[2][2])
	{
		if (input[0][0] == 1)
			winner = 1;
		else if (input[0][0] == 2)
			winner = 2;
	}
	if (input[2][0] == input[1][1]
		&& input[2][0] == input[0][2])
	{
		if (input[2][0] == 1)
			winner = 1;
		else if (input[2][0] == 2)
			winner = 2;
	}
	
	if (winner == 1)
		cout << "Y bingle" << endl;
	else if (winner == 2)
		cout << "X bingle" << endl;
	else
		cout << "Tie" << endl;
	return 0;
}