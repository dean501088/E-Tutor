#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> value;
	while (true)
	{
		int temp; cin >> temp;
		value.push_back(temp);

		char c; cin.get(c);
		if (c == '\n')
			break;
	}
	int last = value.size() - 1;
	for (int i = 0; i < value.size(); i++)
	{
		cout << value[last - i];

		if (i < value.size() - 1)
			cout << " ";
	}
	cout << endl;
	return 0;
}