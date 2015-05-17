#include<iostream>
using namespace std;
int main()
{
    int num[70], index;
 
    //initial
    num[0] = 1;
    num[1] = 1;
    num[2] = 1;
 
    for(int i=3;i<70;i++)
        num[i] = num[i-2]+num[i-3];
 
    while(cin >> index && index>=0)
        cout << num[index] << endl;
    return 0;
}