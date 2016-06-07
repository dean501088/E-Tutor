#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class obj
{
public:
	obj() {}
	obj(int a, int b, int c)
		:x(a), y(b), d(c) {}
	int x, y;
	int d;
};

bool compare(obj x, obj y)
{
	return x.d < y.d;
}

int main()
{
	int n;
	while (cin >> n)
	{
		vector<obj> var;

		//input
		for (int i = 0; i < n; i++)
		{
			int a; cin >> a;
			int b; cin >> b;
			int c; cin >> c;		
			var.push_back(obj(a, b, c));
		}
		sort(var.begin(), var.end(), compare);

		//output
		for (int i = 0; i < n; i++)
		{
			printf("%d ", var[i].x);
			printf("%d ", var[i].y);
			printf("%d\n", var[i].d);
		}
	}
	return 0;
}