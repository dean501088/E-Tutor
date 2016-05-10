#include<iostream>

using namespace std;

int main()
{
	//input
	int arr[3][3];
	for (int i = 0; i < 3; i++)
	for (int j = 0; j < 3; j++)
		cin >> arr[i][j];

	bool ok = false;
	for (int i = 0; i < 3 && !ok; i++)
	{
		//horizon
		if (arr[i][0] == arr[i][1]
			&& arr[i][0] == arr[i][2])
			ok = true;

		//vertical
		if (arr[0][i] == arr[1][i]
			&& arr[0][i] == arr[2][i])
			ok = true;
	}
	
	if (arr[0][0] == arr[1][1]
		&& arr[0][0] == arr[2][2])
		ok = true;
	if (arr[0][2] == arr[1][1]
		&& arr[0][2] == arr[2][0])
		ok = true;

	if (ok)
		cout << "True\n";
	else
		cout << "False\n";
	return 0;
}