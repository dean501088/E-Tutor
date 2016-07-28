#include<iostream>
#include<vector>
 
using namespace std;
 
int main()
{
    int n;
    while(cin >> n)
    while(n--)
    {
        vector<int> x;
        for(int i = 0 ; i < 6; i++)
        {
            int temp;
            cin >> temp;
            x.push_back(temp);
        }
         
        int add = x[1] - x[0];
        int pro = x[1] / x[0];
         
        bool isAdd = true;
         
        for(int i = 2; i < 6; i++)
        if(add != x[i] - x[i - 1])
            isAdd = false;  
         
        if(isAdd)
            x.push_back(x[5] + add);
        else
            x.push_back(x[5] * pro);
         
        //output
        for(int i = 0; i < x.size(); i++)
        {
            cout << x[i];
             
            if(i < x.size() - 1)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}