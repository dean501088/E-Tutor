#include<iostream>

using namespace std;

bool isTriangle(int e[])
{
	return (e[0] + e[1] > e[2]
		&& e[0] + e[2] > e[1]
		&& e[1] + e[2] > e[0]);
}

int main()
{
	int edge[3];
	while (cin >> edge[0] >>
		edge[1] >> edge[2])
	{
		if (isTriangle(edge))
			cout << "Yes\n";
		else
			cout << "No\n";
	}
	return 0;
}