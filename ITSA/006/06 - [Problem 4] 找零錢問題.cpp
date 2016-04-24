#include<iostream>

using namespace std;

int main()
{
	const int coin[4] = {
		50, 10, 5, 1
	};

	int n;
	while (cin >> n)
	{
		//50, 10, 5, 1
		int count[4] = { 0 };
		while (n--)
		{
			int temp; cin >> temp;
			for (int i = 0; i < 4; i++)
			{
				count[i] += temp / coin[i];
				temp %= coin[i];
			}
		}

		//output
		for (int i = 0; i < 4; i++)
		cout << count[i] << endl;
	}
	return 0;
}