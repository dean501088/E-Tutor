#include<iostream>
#include<string>
   
using namespace std;
   
int main()
{
    string perfect[7] = {
        "6", "28", "496",
        "8128", "33550336",
        "8589869056",
        "137438691328"
    };
      
    int n;
    while (cin >> n)
    while(n--)
    {
        string m; cin >> m;
        bool found = false;
        for(int i = 0; i < 7; i++)
        {
            if(m == perfect[i])
            {
                found = true;
                break;
            }
        }
        if(found)
            cout << "perfect\n";
        else
            cout << "nonperfect\n";
    }
    return 0;
}