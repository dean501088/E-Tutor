#include<iostream>
#include<string>

using namespace std;

int main()
{
	//initialize
	char alpha[26];
	for (int i = 0; i < 26; i++)
		alpha[i] = 'a' + i;

	//input
	int move = 0;
	for (int i = 0; i < 5; i++)
	{
		int t; cin >> t;
		move += t;
	}

	//adjust
	while (move < 0)
		move += 26;

	char output[26];
	for (int i = 0; i < 26; i++)
		output[i] = alpha[(i + move) % 26];

	//output
	for (int i = 0; i < 26; i++)
		cout << output[i];
	cout << endl;
	return 0;
}