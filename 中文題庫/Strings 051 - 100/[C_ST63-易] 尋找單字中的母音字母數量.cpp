#include<iostream>
#include<string>
 
using namespace std;
 
bool check(char var, char c)
{
    return var == c || var == c + ('a' - 'A');
}
 
int main()
{
    int n;
    while (cin >> n)
    {
        while (n--)
        {
            string s; cin >> s;
            int count = 0;
 
            for (int i = 0; i < s.length(); i++)
            {
                if (check(s[i], 'a')
                    || check(s[i], 'e')
                    || check(s[i], 'i')
                    || check(s[i], 'o')
                    || check(s[i], 'u'))
                    count++;
            }
            cout << s << " " << count << endl;
        }
    }
    return 0;
}