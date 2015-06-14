#include<iostream>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		for (int i = 35; i < n + 1; i += 35)
		{
			cout << i;

			if (i + 35 < n + 1)
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}