#include<iostream>
#include<vector>
 
using namespace std;
 
int main()
{
    int n;
    while(cin >> n)
    {
        vector<int> x;
        while(n)
        {
            x.push_back(n % 3);
            n /= 3;
        }
        for(int i = 0; i < x.size(); i++)
            cout << x[x.size() - 1 - i];
        cout << endl;
    }
    return 0;
}