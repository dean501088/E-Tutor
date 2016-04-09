#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    string n, m;
    while(cin >> n >> m)
    {
        bool ok = false;
        for(int i = 0; i < m.length(); i++)
        {
            int j;
            for(j = 0; j < n.length(); j++)
                if(m[i + j] != n[j])
                    break;
 
            if(j == n.length())
            {
                ok = true;
                break;
            }
        }
        if(ok)
            cout << "YES\n";
        else
            cout << "NO\n"; 
    }
    return 0;
}