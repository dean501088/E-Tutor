#include<iostream>

using namespace std;

int main()
{
	int num[10];
	for (int i = 0; i < 10; i++)
		cin >> num[i];
	for (int i = 0; i < 10; i++)
	{
		cout << num[9 - i];

		if (i < 9)
			cout << " ";
	}
	cout << endl;
	return 0;
}