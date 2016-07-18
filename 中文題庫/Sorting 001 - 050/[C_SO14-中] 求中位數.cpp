#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main()
{
    while(true)
    {
        vector<int> num;
        int check = 0;
         
        for(int i = 0; i < 5; i++)
        {
            int temp; cin >> temp;
            num.push_back(temp);
             
            if(temp == 0)
                check++;    
        }
         
        if(check == 5)
            break;
             
        sort(num.begin(), num.end());
         
        cout << num[2] << endl;
    }
    return 0;
}