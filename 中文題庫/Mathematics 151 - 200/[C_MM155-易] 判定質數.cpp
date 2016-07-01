#include<iostream>
   
#define MAX 10001
   
using namespace std;
   
void initilize(int prime[])
{
    //initialize boolean
    prime[0] = false;
    prime[1] = true;
    for (int i = 2; i < MAX; i++)
        prime[i] = true;
   
    for (int i = 2; i < MAX; i++)
    {
        if (prime[i])
        {
            for (int j = i * 2; j < MAX; j += i)
            {
                prime[j] = false;
            }
        }
    }
}
   
int main()
{
    int prime[MAX];
    initilize(prime);
   
    int n;
    while (cin >> n)
    {         
        if (prime[n])
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}