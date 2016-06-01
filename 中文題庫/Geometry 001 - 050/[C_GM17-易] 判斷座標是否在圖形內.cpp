#include<iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	int x, y;
	while (cin >> x >> y)
	{
		if (x * x + y * y < n * n)
			cout << "In circle\n";
		else
			cout << "Not in circle\n";

		if (x < m / 2 && y < m / 2
			&& x > m / -2 && y >  m / -2)
			cout << "In square\n";
		else
			cout << "Not in square\n";
	}
	return 0;
}