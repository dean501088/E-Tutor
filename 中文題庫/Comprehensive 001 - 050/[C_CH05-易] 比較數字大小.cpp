#include<iostream>    
#include<vector>    
#include<algorithm>    
     
using namespace std;    
     
int main()    
{    
    vector<int> num;    
         
    for(int i = 0; i < 3; i++)    
    {    
        int temp; cin >> temp;    
        num.push_back(temp);    
    }    
    sort(num.begin(), num.end());    
         
    for(int i = 0; i < 3; i++)    
    {    
        cout << num[2 - i];    
             
        if(i < 2)    
            cout << ">";    
    }    
    cout << endl;    
         
    return 0;    
}  