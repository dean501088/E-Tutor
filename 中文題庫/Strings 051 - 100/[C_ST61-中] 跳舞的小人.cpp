#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	char c;
	string temp;
	while (cin >> temp)
	{
		vector<string> s;
		s.push_back(temp);

		cin.get(c);
		if (c == '\n')
			break;	

		//input
		while (c != '\n')
		{
			cin >> temp;
			s.push_back(temp);
			cin.get(c);
		}

		//current index
		int index = 0;

		for (int i = 0; i < s.size(); i++)
		{
			int move = 0;
			if (s[i][0] >= '0' && s[i][0] <= '9')
				move = atoi(s[i].c_str());

			for (int j = index; j < i; j++)
			s[j][0] = (s[j][0] - 'A' + move) % 26 + 'A';

			if (s[i][0] >= '0' && s[i][0] <= '9')
				index = i;
		}

		//output
		for (int i = 0; i < s.size(); i++)
		if (s[i][0] >= 'A' && s[i][0] <= 'Z')
			cout << s[i];
		cout << endl;
	}
	return 0;
}