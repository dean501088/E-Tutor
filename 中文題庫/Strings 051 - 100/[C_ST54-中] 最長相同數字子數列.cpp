#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	string s;
	while (cin >> s)
	{
		//initialize
		vector<int> arr;
		arr.push_back(1);

		int temp = 1;
		int n = s.length();
		for (int i = 1; i < n; i++)
		{
			if (s[i] == s[i - 1])
				temp++;
			else
				temp = 1;
			arr.push_back(temp);
		}

		for (int i = 0; i < n; i++)
			cout << arr[i] << " ";
		cout << endl;
		
		int max = 0;
		int index;
		for (int i = 0; i < n; i++)
		{
			if (arr[i] > max)
			{
				max = arr[i];
				index = i;
			}
			else if (arr[i] == max
				&& s[i] < s[index])
			{
				max = arr[i];
				index = i;
			}
		}

		for (int i = 0; i < max; i++)
			cout << s[index];
		cout << endl;
	}
	return 0;
}