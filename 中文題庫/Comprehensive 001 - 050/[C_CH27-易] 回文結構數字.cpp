#include<iostream>
#include<vector>

using namespace std;

bool isPalindrome(vector<int> var)
{
	int count = 0;
	int last = var.size() - 1;
	for (int i = 0; i < var.size(); i++)
	{
		if (var[last - i] == var[i])
			count++;
		else
			break;
	}
	return count == var.size();
}

int main()
{
	//initialize
	bool table[501];
	for (int i = 0; i < 501; i++)
	{
		int t = i;
		vector<int> digit;
		while (t)
		{
			digit.push_back(t % 10);
			t /= 10;
		}
		table[i] = isPalindrome(digit);
	}

	int n, m;
	while (cin >> n >> m)
	{
		bool print = false;
		for (int i = n; i <= m; i++)
		if (table[i])
		{
			if (print)
				cout << " ";
			print = true;
			cout << i;
		}
		if (!print)
			cout << 0;
		cout << endl;
	}
	return 0;
}