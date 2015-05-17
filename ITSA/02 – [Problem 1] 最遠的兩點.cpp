#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int n;
	while(cin >> n && n <= 10)
	{
		while(n--)
		{
			vector<int> num, backup;

			//input
			for(int i=0;i<100;i++)
			{
				char c;
				int temp; cin >> temp;

				if(!(temp>=0 && temp<=1000))
					break;

				num.push_back(temp);
				backup.push_back(temp);

				cin.get(c);
				if(c == '\n') break;
			}

			//sort
			sort(num.begin(), num.end());

			int asc = 0, desc = 0;
			for(int i=0;i<num.size()-1;i++)
			{
				if(num[i]==backup[i])
					asc++;
				if(num[i]==backup[backup.size()-1-i])
					desc++;
			}

			if(asc == num.size()-1)
				cout << "ASC" << endl;
			else if(desc == num.size()-1)
				cout << "DESC" << endl;
			else 
				cout << "NOON" << endl;
		}
	}
	return 0;
}
