#include<iostream>
 
using namespace std;
 
int main()
{
    int a, b, c;
    while(cin >> a >> b >> c)
    {
        int ab = a + b;
        int bc = b + c;
        int ac = a + c;
         
        if(ab > c && bc > a && ac > b)
            printf("Bigger than the third side\n");
        else
            printf("Less than the third side\n");
    }
}