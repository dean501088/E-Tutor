#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	string s;
	while (getline(cin, s))
	{
		int alpha = 0;
		int num = 0;
		for (int i = 0; i < s.length(); i++)
		if (s[i] >= 'a' && s[i] <= 'z'
			|| s[i] >= 'A' && s[i] <= 'Z')
			alpha++;
		else if (s[i] >= '0' && s[i] <= '9')
			num++;

		printf("%d,%d\n", alpha, num);
	}
	return 0;
}