#include <stdio.h>
#include <iostream>

using namespace std;

int f(int var);
int g(int var);

int main() {
	// var
	int n;

	cin >> n;
	printf("%d %d\n", f(n), g(n));

	return 0;
}

int f(int n) {
	return n == 1 ? 2 : 3 * f(n - 1) + g(n - 1);
}

int g(int n) {
	return n == 1 ? -6 : g(n - 1) - f(n - 1);
}