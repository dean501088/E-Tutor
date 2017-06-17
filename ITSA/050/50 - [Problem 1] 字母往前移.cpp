#include<iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	getline(cin, s);

	if (s.length() < 101)
	{
		int n; cin >> n;
		cin.get();
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] += n;

				if (s[i] > 'z')
					s[i] -= 26;
			}
			if (s[i] >= 'A' && s[i] <= 'Z')
			{
				s[i] += n;

				if (s[i] > 'Z')
					s[i] -= 26;
			}
			else if (s[i] >= '0' && s[i] <= '9')
			{
				s[i] += n;

				if (s[i] > '9')
					s[i] -= 10;
			}
		}
		cout << s << endl;
	}
	return 0;
}