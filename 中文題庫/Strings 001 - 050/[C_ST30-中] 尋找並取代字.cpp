#include<iostream>
#include<string>
#include<vector>
  
using namespace std;
  
int main()
{
    vector<string> s;
      
    //input
    while(true)
    {
        string temp; cin >> temp;
        s.push_back(temp);
          
        char c; cin.get(c);
          
        if(c == '\n')
            break;
    }
      
    string x, y;
    cin >> x >> y;
      
    for(int i = 0; i < s.size(); i++)
        if(s[i] == x)
            s[i] = y;
      
    for(int i = 0; i < s.size(); i++)
    {
        cout << s[i];
          
        if(i < s.size() - 1)
            cout << " ";
    }
    cout << endl;
      
    return 0;
}