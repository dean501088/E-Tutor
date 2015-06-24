#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n;
	while(cin >> n)
	{
		while(n--)
		{
			string s; cin >> s;
			
			for(int i = 0; i < s.length(); i++)
				cout << s[s.length() - 1 - i];
			cout << endl;
		}
	}
	return 0;
}