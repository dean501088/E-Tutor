#include<iostream>
#include<string>
#include<cmath>
 
using namespace std;
 
int main()
{
    string x, y;
    while(cin >> x >> y)
    {
        for(int i = 0; i < x.length(); i++)
        {
            int diff = abs(x[i] - y[i]);
             
            if(diff == 0 || diff == 2
            || diff == 3)
                cout << "�M";
            else if(diff == 1)
            {
                if(x[i] - y[i] > 0)
                    cout << "Ĺ";
                else
                    cout << "��";
            }
            else if(diff == 4)
            {
                if(x[i] - y[i] > 0)
                    cout << "��";
                else
                    cout << "Ĺ";
            }
        }
        cout << endl;
    }
    return 0;
}