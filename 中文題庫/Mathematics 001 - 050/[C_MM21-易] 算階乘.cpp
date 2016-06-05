#include<iostream>

using namespace std;

int main()
{
	unsigned long long dp[20];
	dp[1] = 1;
	for (int i = 2; i < 21; i++)
		dp[i] = dp[i - 1] * i;
	
	int n;
	while (cin >> n)
	cout << dp[n] << endl;
	return 0;
}