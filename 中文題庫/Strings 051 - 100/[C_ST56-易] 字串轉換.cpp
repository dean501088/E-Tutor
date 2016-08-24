#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	while (cin >> s)
	{
		int sum = 0;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				sum += s[i] - 'a' + 1;
				s[i] = 'z' - (s[i] - 'a');
			}
			else if (s[i] >= 'A' && s[i] <= 'Z')
			{
				sum += s[i] - 'A' + 1;
				s[i] = 'Z' - (s[i] - 'A');
			}
		}
		cout << s << " " << sum << endl;
	}
	return 0;
}