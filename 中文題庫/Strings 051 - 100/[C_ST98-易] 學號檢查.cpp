#include<iostream>
#include<string>

using namespace std;

int main()
{
	const int f = 11 - 'A';

	string s;
	while (getline(cin, s))
	{
		int z = 0;

		int x1 = (s[0] + f) / 10;
		int y1 = (s[0] + f) % 10;

		int x2 = (s[1] + f) / 10;
		int y2 = (s[1] + f) % 10;

		int x3 = (s[2] + f) / 10;
		int y3 = (s[2] + f) % 10;

		z += 9 * (x1 + x2 + x3);
		z += 8 * (y1 + y2 + y3);

		cout << z << endl;

		for (int i = 3; i < 10; i++)
		z += (10 - i) * (s[i] - '0');

		cout << z << endl;

		if (z % 10)
			cout << "false\n";
		else
			cout << "true\n";
	}
	return 0;
}