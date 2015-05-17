#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

class character
{
	public:
		int x, y;
		char c;

		character() {}
		character(int i, int j, char k)
			: x(i), y(j), c(k) {}

		bool operator < (const character &var) const
		{
			if (x != var.x)
				return x < var.x;
			else
				return y < var.y;
		}
};

int main()
{
	string s; cin >> s;
	cin.get();

	char c; cin.get(c);
	int num; cin >> num;

	int last = s.length() / num - 1;

	vector<character> ch;

	for (int i = 0; i < s.length(); i++)
	{
		int x = i % num;
		int y = last - i / num;
		
		ch.push_back(character(x, y, s[i]));
	}
	sort(ch.begin(), ch.end());

	for (int i = 0; i < ch.size(); i++)
	{
		cout << ch[i].c;
		
		if (ch[i].y < last)
			cout << c;
		else if (ch[i].y == last)
			cout << endl;
	}

	int left = s.length();
	left %= s.length() / num;

	for (int i = 0; i < left; i++)
		cout << " ";

	return 0;
}