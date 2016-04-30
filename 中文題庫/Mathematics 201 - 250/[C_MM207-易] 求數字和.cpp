#include<iostream>
 
using namespace std;
 
int main()
{
    int temp;
    int sum = 0;
     
    for(int i = 0 ; i < 5 ; i++)
    {
        cin >> temp;
        sum += temp % 13 + 1;   
    }
    cout << sum << endl;
    return 0;
}