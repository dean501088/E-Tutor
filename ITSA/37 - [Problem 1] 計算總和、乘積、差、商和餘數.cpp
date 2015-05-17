#include<iostream>

using namespace std;

int main()
{
	int x, y; cin >> x >> y;
	
	printf("%d+%d=%d\n", x, y, x+y);
	printf("%d-%d=%d\n", x, y, x-y);
	printf("%d*%d=%d\n", x, y, x*y);
	printf("%d/%d=%d...%d\n", x, y, x/y, x%y);

	return 0;
}