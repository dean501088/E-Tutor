#include<iostream>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		while (n--)
		{
			int num; cin >> num;
			while (num != 1)
			{
				cout << num << endl;

				if (num % 2 == 0)
					num /= 2;
				else
					num = 3 * num + 1;			
			}
			cout << num << endl;
		}
	}
	return 0;
}