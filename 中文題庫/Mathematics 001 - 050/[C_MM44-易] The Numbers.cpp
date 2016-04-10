#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    string x, y;
    while(cin >> x >> y)
    {
        int sum = 0;        
        for(int i = 0; i < y.length(); i++)
        {
            int count = 0;
            for(int j = 0; j < x.length(); j++)
            {
                if(y[i + j] == x[j]
                    && i + j < y.length())
                    count++;
                else
                    break;
            }
            if(count == x.length())
                sum++;
        }
        cout << sum << endl;
    }
}