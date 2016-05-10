#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main()
{
    int n;
    while(cin >> n)
    {
        vector<int> num;
         
        while(n--)
        {
            int temp; cin >> temp;
            num.push_back(temp);    
        }
        sort(num.begin(), num.end());
         
        for(int i = 0; i < num.size(); i++)
        {
            cout << num[i];
             
            if(i < num.size() - 1)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}