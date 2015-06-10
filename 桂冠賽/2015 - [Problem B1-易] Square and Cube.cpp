#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		while (n--)
		{
			int m; cin >> m;

			int power = pow((double)m, 2.0);
			int cube = pow((double)m, 3.0);

			cout << power << " " << cube << endl;
		}
	}
	return 0;
}