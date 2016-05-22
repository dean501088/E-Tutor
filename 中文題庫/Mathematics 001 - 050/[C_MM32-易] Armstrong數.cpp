#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main()
{
	string s;
	while (cin >> s)
	{
		int num = 0;
		int cube = 0;
		int last = s.length() - 1;

		for (int i = 0; i < s.length(); i++)
		{
			int temp = s[i] - '0';
			num += temp * pow(10.0, last - i);
			cube += pow(temp, 3.0);
		}

		if (num == cube)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}