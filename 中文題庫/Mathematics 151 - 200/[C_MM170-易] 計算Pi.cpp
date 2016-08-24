#include<iostream>
 
#define MAX 100001
 
using namespace std;
 
int main()
{
    //dp
    double pi[MAX];
    pi[1] = 4;
     
    //fix +-
    double f = -1;
     
    for(int i = 2; i < MAX; i++)
    {
        pi[i] = pi[i - 1];
        pi[i] += f * 4 / (2 * i - 1);
        f *= -1;
    }
     
    int n;
    while(cin >> n && n)
    printf("%.5lf\n", pi[n]);
    return 0;
}