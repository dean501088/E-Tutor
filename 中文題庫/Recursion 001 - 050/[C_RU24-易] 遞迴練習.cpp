#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	// var
	int n;
	double v[19];

	// init
	v[0] = 0;
	v[1] = 2;

	for (int i = 2; i <= 18; i++)
		v[i] = 2 * v[i - 1] / (1 + 2 * v[i - 1]);

	cin >> n;
	printf("%.5lf\n", v[n]);

	return 0;
}