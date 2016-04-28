#include<iostream>
 
#define MAX 37
 
using namespace std;
 
int main()
{
    long long f[MAX] = { 0 };
    f[0] = 1;
    f[1] = 1;
    for(int i = 2; i < MAX; i++)
    for(int j = 0; j < i; j++)
        f[i] += f[j] * f[i - j];
    int n;
    while(cin >> n)
    printf("f(%d)=%lld\n", n, f[n + 1]);
    return 0;
}