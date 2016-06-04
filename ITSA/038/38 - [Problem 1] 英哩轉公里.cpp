#include<iostream>

using namespace std;

int main()
{
	double n;
	while (cin >> n && n < 1000)
	{
		printf("%.1f\n", n * 1.6);
	}
	return 0;
}