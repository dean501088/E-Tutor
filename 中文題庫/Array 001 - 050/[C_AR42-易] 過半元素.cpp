#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int t;
	char c;
	
	//input
	vector<int> e;
	cin >> t; 
	cin.get(c);
	e.push_back(t);

	while (c != '\n')
	{
		cin >> t; 
		cin.get(c);
		e.push_back(t);
	}
	sort(e.begin(), e.end());

	//initialize
	vector<int> count;
	count.push_back(1);

	for (int i = 1; i < e.size(); i++)
	if (e[i] == e[i - 1])
		count.push_back(count[i - 1] + 1);
	else
		count.push_back(1);

	//output
	bool print = false;

	for (int i = 0; i < e.size(); i++)
	if (count[i] > e.size() / 2)
	{
		cout << e[i] << endl;
		print = true;
		break;
	}
	if (!print)
		cout << "NO\n";
	//system("pause");
	return 0;
}