#include<iostream>
 
using namespace std;
 
void initialize(int data[])
{
    data[0] = 1;
    data[1] = 1;
     
    for(int i = 2;i < 46; i++)
    {
        data[i] = 0; 
        data[i] += data[i - 1];
        data[i] += data[i - 2];
    }
}
 
int main()
{
    int data[46];
    initialize(data);
     
    int n;
    while(cin >> n)
    {
        if(!(n > 0 && n < 46))
            break;
             
        cout << data[n] << endl;
    }
     
    return 0;
}