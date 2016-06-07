#include<iostream>
 
using namespace std;
 
int main()
{
    int n;
    while(cin >> n)
    {
        int x[26] = { 0 };
         
        while(n--)
        {
            char c; cin >> c;
            cin.get();
            x++;
        }
         
        for(int i = 0; i < 26; i++)
        {
            if(x[i] > 0)
            {
                printf("%c", i + 'a');
                printf(" %d\n", x[i]);
            }
        }
    }
    return 0;
}