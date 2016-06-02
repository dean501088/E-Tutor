#include<iostream>

using namespace std;

int main()
{
	int m;
	while (cin >> m)
	while (m--)
	{
		double x; cin >> x;
		cin.get();
		double r; cin >> r;
		cin.get();
		int n; cin >> n;

		while (n--)
			x *= (1 + r / 100);
		cout << (int)x << endl;
	}
	return 0;
}