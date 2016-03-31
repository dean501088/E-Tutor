#include<iostream>

using namespace std;

int main()
{
	int num[6];
	for (int i = 0; i < 6; i++)
		cin >> num[i];

	for (int i = 0; i < 6; i++)
	{
		cout << num[5 - i];
		
		if (i < 5)
			cout << " ";
	}
	cout << endl;
	return 0;
}