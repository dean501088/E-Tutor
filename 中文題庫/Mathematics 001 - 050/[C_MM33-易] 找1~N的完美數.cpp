#include<iostream>
#include<vector>

#define MAX 10001

using namespace std;

int main()
{
	vector<int> perfect;
	//initilaize
	for (int i = 6; i < MAX; i++)
	{
		int sum = 0;
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0)
				sum += j;
		}
		if (i == sum)
			perfect.push_back(i);
	}

	int n;
	while (cin >> n)
	{
		int size = perfect.size();
		for (int i = 0; i < size; i++)
		{
			if (perfect[i] > n)
				break;

			cout << perfect[i];

			if (perfect[i + 1] < n)
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}