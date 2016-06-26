#include<iostream>
#include<vector>
 
using namespace std;
 
int main()
{
    int n;
    while (cin >> n && n)
    {
        int counter = 0;
        while (n)
        {
            if (n % 2 == 1)
                counter++;
            n /= 2;
        }
        printf("The number of bits is %d.\n", counter);
    }
    return 0;
}