#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int transform(vector<int> var)
{
	int last = var.size() - 1;
	int max = 0;
	int min = 0;
	for (int i = 0; i < var.size(); i++)
	{
		int p = last - i;
		max += var[last - i] * pow(10.0, p);
		min += var[i] * pow(10.0, p);
	}
	return max - min;
}

int main()
{
	vector<int> num;

	while (true)
	{
		int temp; cin >> temp;
		num.push_back(temp);

		char c;
		cin.get(c);

		if (c == '\n')
			break;
	}
	sort(num.begin(), num.end());
	cout << transform(num) << endl;
	return 0;
}