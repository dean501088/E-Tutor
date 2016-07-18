#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main()
{
    int n;
    while(cin >> n)
    {
        vector<double> num;
         
        while(n--)
        {
            double temp; cin >> temp;
            num.push_back(temp);
        }
        sort(num.begin(), num.end());
         
        int last = num.size() - 1; 
        printf("%.2f\n%.2f\n", num[last], num[0]);      
    }
    return 0;
}