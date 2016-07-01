#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	//initialize
	int alpha[91];
	alpha['A'] = 14;
	alpha['J'] = 11;
	alpha['Q'] = 12;
	alpha['K'] = 13;
	for (int i = 0; i < 10; i++)
		alpha[i + '0'] = i;

	string s;
	while (cin >> s)
	{
		//input
		vector<string> card;
		card.push_back(s);

		for (int i = 0; i < 4; i++)
		cin >> s, card.push_back(s);

		int sum = 0;
		for (int i = 0; i < 5; i++)
		{
			if (card[i].length() == 1)
				sum += alpha[card[i][0]];
			else
				sum += 10;
		}

		//output
		cout << sum << endl;
	}
	return 0;
}