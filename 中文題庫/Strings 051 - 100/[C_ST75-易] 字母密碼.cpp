#include<iostream>
#include<string>

using namespace std;

int main()
{
	//initialize
	int table[26];
	for (int i = 0; i < 26; i++)
		table[i] = 0;
	char c[10] = {
		'l', 'z', 'e', 'a', 's',
		'h', 'j', 'b', 'g', 'o'
	};
	for (int i = 0; i < 10; i++)
		table[c[i] - 'a'] = i + 1;

	string s;
	while (getline(cin, s) && s != "0")
	{
		int password = 0;
		for (int i = 0; i < s.length(); i++)
		if (s[i] >= 'a' && s[i] <= 'z')
			password += table[s[i] - 'a'];
		else if (s[i] >= 'A' && s[i] <= 'Z')
			password += table[s[i] - 'A'];
		
		//output
		cout << password << endl;
	}
	return 0;
}