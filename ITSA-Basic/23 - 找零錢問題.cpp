#include <iostream>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		int total = 0;
		int sp[3] = { 15, 20, 30 };
		
		for (int i = 0; i < 3; i++)
		{			
			cin.get();
			int temp; cin >> temp;
			total += temp * sp[i];
		}
		
		int diff = n - total;
		if (n - total < 0)
			cout << 0 << endl;
		else
		{
			int coin[3] = { 1, 5, 50 };
			int count[3] = { 0 };
			for (int i = 2; i > -1; i--)
			{
				count[i] = diff / coin[i];
				diff %= coin[i];
			}
			printf("%d,%d", count[0], count[1]);
			printf(",%d\n", count[2]);
		}	
	}
	return 0;
}