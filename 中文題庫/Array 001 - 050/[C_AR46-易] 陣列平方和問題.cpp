#include<iostream>

using namespace std;

int main()
{
	double sum = 0; 

	while (true)
	{
		double num; cin >> num;
		char c; cin.get(c);

		sum += num * num;

		if (c == '\n')
			break;
	}
	printf("%.6f\n", sum);
	return 0;
}