#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int k;
	while (cin >> k)
	{
		while (k--)
		{
			//input
			int n; cin >> n;

			for (int m = n - 1; m > -1; m--)
			{
				//initilize
				vector<int> religion;
				for (int i = 0; i < n; i++)
					religion.push_back(i + 1);

				int index = 0;

				while (religion.size() > 1)
				{
					index += m - 1;
					index %= religion.size();
					religion.erase(religion.begin() + index);
				}
				if (religion[0] == n)
				{
					cout << m << endl;
					break;
				}
			}
		}
	}
	return 0;
}