#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	getline(cin, s);

	int alpha[26] = { 0 };

	for (int i = 0; i < s.length(); i++)
	{
		int index;

		if (s[i] >= 'a' && s[i] <= 'z')
		{
			index = s[i] - 'a';
			alpha[index]++;
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			index = s[i] - 'A';
			alpha[index]++;
		}
	}
	for (int i = 0; i < 26; i++)
	{
		cout << alpha[i];

		if (i < 25)
			cout << " ";
	}
	cout << endl;
	return 0;
}