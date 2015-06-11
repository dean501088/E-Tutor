#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class grade
{
	public:
		int index;
		int math;
		int eng;

		grade(int i, int m, int e)
			:index(i), math(m), eng(e) {}

		bool operator<(const grade &x)const
		{
			if (math != x.math)
				return math > x.math;
			else
				return eng > x.eng;
		}
};

int main()
{
	int n;
	while (cin >> n)
	{
		vector<grade> g;

		while (n--)
		{
			int index; cin >> index;
			int math; cin >> math;
			int eng; cin >> eng;

			g.push_back(grade(index, math, eng));
		}
		sort(g.begin(), g.end());

		for (int i = 0; i < g.size(); i++)
		{
			cout << g[i].index << " ";
			cout << g[i].math << " ";
			cout << g[i].eng << endl;
		}
	}
	return 0;
}