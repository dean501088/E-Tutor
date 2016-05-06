#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    string s[12] = {
        "rat", "ox", "tiger",
        "rabbit", "dragon", "snake",
        "horse", "sheep", "monkey", 
        "rooster", "dog", "pig"
    };
     
    int n;
    while(cin >> n)
    {
        int index = (n - 2008);
        index %= 12;
         
        if(index < 0)
            index += 12;
        cout << s[index] << endl;
    }
    return 0;
}