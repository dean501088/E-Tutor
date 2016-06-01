#include<iostream>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		int sum = 0;
		for (int i = 6; i < n; i += 12)
		{
			sum += i;
		}
		cout << sum << endl;
	}
	return 0;
}