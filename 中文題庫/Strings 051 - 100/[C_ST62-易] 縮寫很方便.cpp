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

		while (c != '\n')
		{
			cin >> temp; 
			s.push_back(temp);
			cin.get(c);
		}

		//output
		for (int i = 0; i < s.size(); i++)
		if (s[i][0] >= 'A' && s[i][0] <= 'Z')
			cout << s[i][0];
		cout << endl;
	}
	return 0;
}