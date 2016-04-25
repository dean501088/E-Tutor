#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    int n;
    while(cin >> n)
    while(n--)
    {
        //input
        string t; cin >> t;
         
        if(t.length() == 4)
        {
            //count
            int alpha[10] = { 0 };
            for(int i = 0; i < t.length(); i++)
                alpha[t[i] - '0']++;
             
            // 2
            int x = 0;
            // > 2
            int y = 0;
            for(int i = 0; i < 10; i++)
            {
                if(alpha[i] == 2)
                    x++;
                else if(alpha[i] > 2)
                    y++;
            }
            if(x == 1 && !y)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
        else
            cout << "Failure Input\n";
    }
    return 0;
}