#include<iostream>

using namespace std;

int main()
{
	int dp[21];
	dp[1] = 1;
	dp[2] = 2;
	for (int i = 3; i < 21; i++)
		dp[i] = dp[i - 1] + dp[i - 2];

	int n;
	while (cin >> n)
	cout << dp[n] << endl;
	return 0;
}