#include<iostream>
#include<vector>
  
using namespace std;
  
int main()
{
    int n;
    while(cin >> n && n)
    {
        vector<int> bit;
        bool check = false;
         
        if(n < 0)
        {
            check = true;
            n *= -1;
        }
         
        for(int i = 0 ; i < 8 ; i++)
        {
            bit.push_back(n % 2);
            n /= 2;
        }
         
        if(check)
        {
            for(int i = 0 ; i < 8 ; i++)
            {
                if(bit[7 - i] == 1)
                    bit[7 - i] = 0;
                else
                    bit[7 - i] = 1;
            }
            bit[0]++;
            for(int i = 0 ; i < 7 ; i++)
            {
                if(bit[i] > 1)
                {
                    bit[i] = 0;
                    bit[i + 1]++;   
                }
            }
        }
        for(int i = 0 ; i < 8 ; i++)
            cout << bit[7 - i];
        cout << endl;
    }
    return 0;
}