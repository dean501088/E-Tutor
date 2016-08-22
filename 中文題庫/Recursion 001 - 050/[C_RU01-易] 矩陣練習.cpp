#include<iostream>
#include<vector>
 
using namespace std;
 
int main()
{
    int n;
    while(cin >> n)
    {
        vector<int> num;
        num.push_back(1);
         
        for(int i = 2; i < n + 1; i++)
        {
            for(int j = 0; j < num.size(); j++)              
                num[j] *= i;
             
            for(int j = 0; j < num.size(); j++)
            {
                if(num[j] > 9)
                {
                    if(j < num.size() - 1)
                        num[j + 1] += num[j] / 10;
                    else
                        num.push_back(num[j] / 10);
                         
                    num[j] %= 10; 
                }
            }
        }
         
        //output
        for(int i = num.size() - 1; i > -1; i--)
            cout << num[i];
        cout << endl; 
    }
    return 0;
}