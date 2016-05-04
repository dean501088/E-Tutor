#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
 
#define MAX 10000001
  
using namespace std;
  
int gcd(int x, int y)
{
    while (x %= y)
        swap(x, y);
    return y;
}
  
class obj
{
    public:
        obj(long long x, int y)
            :num(x), count(y) {}
        obj(long long var)
            :num(var) {}
        obj() {}
        long long num;
        int count;
};
  
bool prime[MAX];
  
void initilize()
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
    //initialize prime
    initilize();
  
    vector<obj> list;
    for (int i = 2; i < MAX; i++)
    if (prime[i])
        list.push_back(obj(i));
     
    int m;
    cin.get();
    cin.get();
    cin >> m;
     
    cin.get();
     
    int n;
    cin.get();
    cin.get();
    cin >> n;
     
    int g = gcd(m, n);
    int lcm = n * m / g;
     
    printf("GCD=%d\n", gcd(m, n));
    printf("LCM=%d\n", lcm);
     
 
    //initialize count
    for (int i = 0; i < list.size(); i++)
        list[i].count = 0;
 
    for (int i = 0; i < list.size(); i++)
    {
        while (true)
        {
            if (lcm % list[i].num == 0)
            {
                lcm /= list[i].num;
                list[i].count++;
            }
            else
                break;
        }
        if (lcm == 1)
        {
            break;
        }
    }
 
    vector<obj> output;
    for (int i = 0; i < list.size(); i++)
    if (list[i].count > 0)
        output.push_back(list[i]);
 
 
    for (int i = 0; i < output.size(); i++)
    {
        for(int j = 0; j < output[i].count; j++)
        {
            cout << output[i].num;    
            if(j < output[i].count - 1)
                cout << "*";
        }
        if(i < output.size() - 1)
            cout << "*";
    }
    printf("\n");
     
    return 0;
}