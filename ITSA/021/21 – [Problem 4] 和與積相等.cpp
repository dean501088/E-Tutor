#include<iostream>
#include<string>
#include<vector>
#include<cmath>
  
#define MAX 1000000
  
using namespace std;
  
int main()
{
    vector<int> nums;
    for(int i = 1; i < MAX; i++)
    {
        int add = 0;
        int product = 1;        
        int temp = i;
          
        while(temp)
        {
            int bit = temp % 10;        
            add += bit; 
            product *= bit;
            temp /= 10;
        }
              
        if(add == product)
            nums.push_back(i);
    }
      
    int n;
    while(cin >> n)
    {
        vector<int> output;
        for(int i = 0 ;; i++)
        {
            if(nums[i] < pow(10.0, n - 1))
                output.push_back(nums[i]);
            else
                break;
        }
        for(int i = 0; i < output.size(); i++)
            cout << output[i] << endl;
    }
    return 0;
}