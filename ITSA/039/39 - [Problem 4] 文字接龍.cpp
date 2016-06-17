#include<iostream>
#include<string>

using namespace std;

string reverse(string s)
{
	string temp = s;

	for (int i = 0; i < s.length(); i++)
		temp[i] = s[s.length() - 1 - i];

	return temp;
}

int main()
{
	int n;
	while (cin >> n)
	{
		while (n--)
		{
			string s; cin >> s;
			for (int i = 0; i < s.length(); i++)
			{
				string temp = s;
				
				if (s[i] == 'a')
				{
					s = s.substr(0, i + 1);
					s += reverse(temp.substr(i + 1, temp.length()));
				}
				else if (s[i] == 'b')
				{
					s += s.substr(i + 1, s.length());
				}
				else if (s[i] == 'c')
				{
					s.erase(i + 1, 2);
				}
			}
			cout << s << endl;
		}
	}
	return 0;
}