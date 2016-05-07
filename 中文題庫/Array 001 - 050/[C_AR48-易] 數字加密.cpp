#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s; cin >> s;

	for (int i = 0; i < 4; i++)
	{
		s[i] += 7;
		s[i] = '0' + (s[i] - '0') % 10;
	}
	
	int temp;
	temp = s[0];
	s[0] = s[2];
	s[2] = temp;

	temp = s[1];
	s[1] = s[3];
	s[3] = temp;
	
	cout << s << endl;
	return 0;
}