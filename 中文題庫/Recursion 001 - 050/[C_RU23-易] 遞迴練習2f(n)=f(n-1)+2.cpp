#include <stdio.h>
#include <iostream>

int main() {
	// var
	int n;
	double v[19];

	// init
	v[0] = 0;
	v[1] = 1.0;

	for (int i = 2; i <= 18; i++)
		v[i] = (v[i - 1] + 2) / 2;

	cin >> n;
	printf("%.5lf\n", v[n]);

	return 0;
}