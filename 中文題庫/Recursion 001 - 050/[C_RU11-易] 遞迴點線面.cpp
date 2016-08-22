#include<iostream>
 
#define MAX 100001
 
using namespace std;
 
void initialize(long long b[])
{
    long long a[MAX];
    a[1] = 2;
     
    for(int i = 2; i < MAX; i++)
        a[i] = a[i - 1] + i;
     
    b[1] = 2;
    b[2] = 4;
    b[3] = 8;
     
    for(int i = 4; i < MAX; i++)
    {
        b[i] = b[i - 1] + a[i - 1];
    }
}
 
int main()
{
    long long data[MAX];
    initialize(data);
     
    data[0] = 1;
     
    int n;
    while(cin >> n)
    {
        cout << data[n] << endl;
    }
    return 0;
}