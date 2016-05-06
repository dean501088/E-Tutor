#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    string n, m;
    while(cin >> n >> m)
    {
        int count = 0;
        for(int i = 0; i < m.length(); i++)
        {
            int j;
            for(j = 0; j < n.length(); j++)
                if(m[i + j] != n[j])
                    break;
            if(j == n.length())
                count++;
        }
        cout << count << endl;
    }
    return 0;
}