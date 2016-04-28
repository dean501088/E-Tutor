#include<iostream>
#include<vector>
  
using namespace std;
  
int main()
{
    int n;
    while(cin >> n && n)
    {
        vector<int> bit;
        for(int i = 0 ; i < 8 ; i++)
        {
            bit.push_back(n % 2);
            n /= 2;
        }
        for(int i = 0 ; i < 8 ; i++)
            cout << bit[7 - i];
        cout << endl;
    }
    return 0;
}