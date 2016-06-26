#include<iostream>
 
using namespace std;
 
int sumbit(int n)
{
    int sum = 0;
    while(n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
 
int main()
{
    int y, m, d;
    while(cin >> y >> m >> d)
    {
        int sum = 0;
        sum += sumbit(y);
        sum += sumbit(m);
        sum += sumbit(d);
          
         
        while(sum > 9)
            sum = sumbit(sum);
             
        cout << sum << endl; 
    }
    return 0;
}