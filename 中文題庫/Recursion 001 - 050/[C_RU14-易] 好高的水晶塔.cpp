#include<iostream>
 
using namespace std;
 
void initialize(int data[])
{
    data[1] = 1;
     
    for(int i = 2; i < 1001; i++)
        data[i] = data[i - 1] + i * i;
}
 
int main()
{
    int data[1001];
    initialize(data);
     
    int n;
    while(cin >> n)
    {
        if(!(n > 0 && n < 1001))
            break;
             
        cout << data[n] << endl;
    }
    return 0;
}