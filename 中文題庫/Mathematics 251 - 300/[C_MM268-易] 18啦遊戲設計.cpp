#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	//input
	int dice[4];
	for (int i = 0; i < 4; i++)
		cin >> dice[i];
	sort(dice, dice + 4);

	int index[4] = { 1 };
	int temp = 1;
	int max = 0;
	for (int i = 1; i < 4; i++)
	{
		if (dice[i] == dice[i - 1])
			temp++;
		else				
			temp = 1;
		index[i] = temp;

		if (max < index[i])
			max = index[i];
	}

	// 4 same
	bool win = (max == 4);

	// 3 same, 4 different
	bool r = (max == 3 || max == 1);

	int ans = 0;
	if (max == 2)
	{
		// 2 same, 2 same
		if (index[1] == index[3]
			&& index[1] == max)
			ans = dice[2] * 2;
		// 2 same, 2 different
		else
		{
			for (int i = 0; i < 4; i++)
				ans += dice[i];
			for (int i = 0; i < 4; i++)
			if (index[i] == max)
				ans -= dice[i] * 2;
		}
	}

	if (win)
		cout << "WIN\n";
	else if (r)
		cout << "R\n";
	else
		cout << ans << endl;	
	return 0;
}