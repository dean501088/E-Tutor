#include<iostream>  
#include<string>  
#include<vector>  
  
using namespace std;  
  
void f(int n)  
{  
    string temp; cin >> temp;  
    char c; cin.get(c);  
    if (c != '\n')  
        f(n + 1);  
  
    cout << temp;  
    if (n > 0)  
        cout << " ";  
    else  
        cout << endl;  
    return;       
}  
  
int main()  
{  
    f(0);  
    return 0;  
}  