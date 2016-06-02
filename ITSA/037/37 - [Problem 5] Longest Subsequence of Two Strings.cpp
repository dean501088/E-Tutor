#include<iostream>
#include<string>

using namespace std;

int main()
{
	string x, y;
	cin >> x >> y;

	int found = 0;
	int last = 0;

	for (int i = 0; i < y.length(); i++)
	{
		for (int j = last; j < x.length(); j++)
		{
			if (y[i] == x[j])
			{
				last = j + 1;
				found++;
				break;
			}
		}
	}
	cout << found << endl;
	return 0;
}