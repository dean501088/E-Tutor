#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	while (getline(cin, s))
	{
		int count = 0;
		for (int i = 0; i < s.length() - 1; i++)
		if (s[i] == '/' && s[i + 1] != '/')
				count++;
		if (s[s.length() - 1] == '/')
			count++;

		cout << count << endl;
	}
	return 0;
}