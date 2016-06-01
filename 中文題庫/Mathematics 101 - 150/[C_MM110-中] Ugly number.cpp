#include<iostream>
#include<algorithm>
 
#define MAX 1001
  
using namespace std;
  
int main()
{
    //ugly number table
    int u[MAX] = { 1 };
  
    //index 2 3 5
    int p2 = 0;
    int p3 = 0;
    int p5 = 0;
  
    for (int i = 1; i < MAX; i++)
    {
        while (u[p2] * 2 <= u[i - 1])  p2++;
        while (u[p3] * 3 <= u[i - 1])  p3++;
        while (u[p5] * 5 <= u[i - 1])  p5++;
  
        u[i] = min(u[p2] * 2, u[p3] * 3);
        u[i] = min(u[i], u[p5] * 5);
    }
    int n;
    while(cin >> n)
    cout << u[n - 1] << endl;
    return 0;
}