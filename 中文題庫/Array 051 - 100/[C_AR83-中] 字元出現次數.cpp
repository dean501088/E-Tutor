#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    string s;
    while(getline(cin, s) && s != "end")
    {
        int count[123] = { 0 };
        for(int i = 0; i < s.length(); i++)
            count[s[i]]++;
         
        string q; cin >> q;
        cin.get();
        cout << count[q[0]] << endl;
    }
    return 0;
} 