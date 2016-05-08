#include<iostream>
#include<vector>
 
#define MAX 100001
 
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
        vector<int> output;
 
        for (int i = 1; i < n + 1; i++)
            if (prime[i])
                output.push_back(i);
        for (int i = 0; i < output.size(); i++)
        {
            cout << output[i];
 
            if (i < output.size() - 1)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}