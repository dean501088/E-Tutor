#include<iostream>

using namespace std;

void initilize(int data[])
{
	data[0] = 0;
	data[1] = 1;
	data[2] = 2;

	for (int i = 3; i < 21; i++)
	{
		data[i] = data[i - 1] + data[i - 2];
	}
}

int main()
{
	int data[21];
	initilize(data);

	int n;
	while (cin >> n)
	{
		while (n--)
		{
			int x; cin >> x;
			cout << data[x] << endl;
		}
	}
	return 0;
}