#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int key;
	cin >> key;
	
	int coded;
	while (cin >> coded)
	{
		char c; cin.get(c);
		if (c == '\n')
			break;

		int decoded = 10 - (coded - key - 48);

		if (decoded == 10)
			decoded = 0;

		cout << decoded;
	}
	cout << endl;
	return 0;
}