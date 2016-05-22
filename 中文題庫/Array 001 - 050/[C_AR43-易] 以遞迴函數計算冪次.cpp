#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	double m, n;
	while (cin >> m >> n)
	{
		if (m < 0 && n < 0)
			break;

		printf("%.f\n", pow(m, n));
	}
	return 0;
}