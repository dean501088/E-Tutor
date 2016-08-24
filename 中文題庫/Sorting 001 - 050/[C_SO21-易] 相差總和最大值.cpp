#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main()
{
    int n;
    while(cin >> n)
    {
        while(n--)
        {
            int m; cin >> m;
             
            vector<int> num;
             
            while(m--)
            {
                int temp; cin >> temp;
                num.push_back(temp);
            }
            sort(num.begin(), num.end());
             
            int last = num.size() - 1;
            int sum = 0;
             
            for(int i = 0; i < num.size() / 2; i++)
                sum += num[last - i] - num[i];
             
            cout << sum << endl;
        }
    }
    return 0;   
} 