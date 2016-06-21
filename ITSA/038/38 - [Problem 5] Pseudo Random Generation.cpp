#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n;
	while (cin >> n && n)
	{
		while (n--)
		{
			int a, c, m, x;
			cin >> a >> c >> m >> x;

			vector<int> num;
			num.push_back((a * x + c) % m);

			int check = 0;
			while (true)
			{
				int index = num.size() - 1;
				int temp = a * num[index] + c;
				num.push_back(temp % m);

				if (temp % m == num[check])
				{
					check++;
					if (check == num.size() / 2 && num.size() % 2 == 0)
						break;
				}
				else
				{
					check = 0;
				}			
			}
			cout << check << endl;;
		}		
	}
	return 0;
}