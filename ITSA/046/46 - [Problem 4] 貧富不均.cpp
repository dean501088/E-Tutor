#include<iostream>
#include<vector>
#include<cmath> 
#include<algorithm>
 
using namespace std;
 
int main()
{
    int n;
    while (cin >> n)
    while (n--)
    {
        //input 
        int m; cin >> m;
        vector<int> income;
        for (int i = 0; i < m; i++)
        {
            int temp; cin >> temp;
            income.push_back(temp);
        }
        sort(income.begin(), income.end());
        reverse(income.begin(), income.end());
 
        int ans = income[0] * 40 / 100;
        int p = 0;
        for (int i = 1; i < m; i++)
        {
            if (income[i] != income[i - 1])
                p = ceil((double)i / m * 100);
 
            if (p < 11)
                ans += income[i] * 40 / 100;
            else if (p < 31)
                ans += income[i] * 30 / 100;
            else if (p < 61)
                ans += income[i] * 20 / 100;
            else if (p < 81)
                ans += income[i] * 10 / 100;
        }
        cout << ans << endl;
    }
    return 0;
}