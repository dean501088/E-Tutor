#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    int n;
    while (cin >> n)
    while (n--)
    {
        //input
        string s;
        cin >> s;
                 
        int max = 0;
        int m = s.length();     
        int count[10] = { 0 };
        for (int i = 0; i < m; i++)
        {
            count[s[i] - '0']++;
            if (max < count[s[i] - '0'])
                max = count[s[i] - '0'];
        }   
         
        //output
        bool print = false;
        for (int i = 0; i < 10; i++)
        {
            if(max == count[i])
            {
                if(print)
                    cout << " ";
                print = true;
                cout << i;
            }           
        }
        cout << endl;
    }
    return 0;
}