#include<iostream>
#include<vector>
    
#define MAX 100001
    
using namespace std;
    
int prime[MAX];  
    
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
    initilize();
     
    vector<int> p;
    for(int i = 2; i < MAX; i++)
    if(prime[i])
        p.push_back(i);
    
    int n;
    while (cin >> n)
    {         
        vector<int> out;
        for(int i = 0; i < p.size(); i++)
        {
            if(n >= p[i])
                out.push_back(p[i]);
            else
                break;
        }
         
        //output
        for(int i = 0; i < out.size(); i++)
        {
            cout << out[i];
            if(i < out.size() - 1)
                cout << " ";
        }
        cout << endl << out.size() << endl;
    }
    return 0;
}