#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int k;
	while (cin >> k)
	{
		while (k--)
		{
			int n; cin >> n;

			vector<int> t;
			for (int i = 0; i < n; i++)
			{
				t.push_back(i + 1);
			}

			int count = 0;
			for (int i = t.size() - 1; i > -1; i--)
			{
				for (int j = i - 1; j > -1; j--)
				{
					for (int k = j - 1; k > -1; k--)
					{
						if (t[i] < t[j] + t[k])
							count++;
					}
				}
			}
			cout << count << endl;
		}
	}
	return 0;
}
