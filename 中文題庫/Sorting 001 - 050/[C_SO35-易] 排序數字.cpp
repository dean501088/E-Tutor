#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main()
{
    vector<int> num;
     
    num.push_back(1);
    num.push_back(6);
    num.push_back(9);
    num.push_back(23);
    num.push_back(56);
    num.push_back(95);
     
    int temp; cin >> temp;
     
    for(int i = 0; i < num.size(); i++)
    {
        if(temp > num[i - 1]
        && temp < num[i]
        && i - 1 > -1)
        {
            printf("%d,", temp);
        }
        printf("%d", num[i]);
         
        if(i < num.size() - 1)
            printf(",");
    }
    printf("\n");
    return 0;
}