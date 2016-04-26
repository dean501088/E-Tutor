#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    string s[3];
    s[0] = "Person";
    s[1] = "Fairy";
    s[2] = "Dwarf";
     
    int n;
    while(cin >> n)
    {
        cout << s[n - 1] << endl;           
    }
    return 0;
}