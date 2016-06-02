#include<iostream>

using namespace std;

int main()
{
	long long dp[1001];
	dp[1] = 1;
	dp[2] = 1;
	for (int i = 3; i < 1001; i++)
	dp[i] = dp[i - 1] + dp[i - 2]; 

	int n;
	while (cin >> n)
	cout << dp[n] << endl;
	return 0;
}