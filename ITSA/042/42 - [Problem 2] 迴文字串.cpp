#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		while (n--)
		{
			string s; cin >> s;
			string r = s;

			for (int i = 0; i < s.length(); i++)
			{
				r[i] = s[s.length() - 1 - i];

				if (r[i] >= 'a' && r[i] <= 'z')
					r[i] += 'A' - 'a';
				else if (r[i] >= 'A' && r[i] <= 'Z')
					r[i] += 'a' - 'A';
			}
			cout << r << endl;
		}
	}
	return 0;
}