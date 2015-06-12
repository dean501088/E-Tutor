#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int m, n;
	cin >> m; cin.get();
	cin >> n;

	double cost;

	if (m == 186)
		cost = n * 0.09;
	else if (m == 386)
		cost = n * 0.08;
	else if (m == 586)
		cost = n * 0.07;
	else
		cost = n * 0.06;
	cost = floor(cost + 0.5);
	if (cost > m)
	{
		if (m == 186)
			cost *= 0.8;
		else if (m == 386)
			cost *= 0.7;
		else if (m == 586)
			cost *= 0.6;
		else
			cost *= 0.5;
	}
	cost = floor(cost + 0.5);
	printf("%.f\n", cost);
	return 0;
}