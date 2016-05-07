#include<iostream>
 
using namespace std;
 
int main()
{
    int n;
    while(cin >> n)
    {
        int sum = (1 + n) * n;
        sum /= 2;
        printf("1 ");
        for(int i = 2; i < n + 1; i++)
        {
            printf("+ %d ", i);
        }
        if(n == 1)
            printf("= 1\n");
        else
            printf("= %d\n", sum);
    }
    return 0;
}