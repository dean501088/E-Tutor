#include<iostream>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		int num[128] = { 0 };

		while (n--)
		{
			int temp; cin >> temp;
			num[temp - 1]++;
		}
		
		int index;
		for (index = 0; index < 128; index++)
		{
			if (num[index] > 1)
			{
				cout << '0' << endl;
				break;
			}
		}

		if (index == 128)
			cout << '1' << endl;
	}
	return 0;
}