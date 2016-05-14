#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	while (cin >> s)
	{
		for (int i = s.length() - 1; i > -1; i--)
			cout << s[i];
		cout << endl;
	}
	return 0;
}