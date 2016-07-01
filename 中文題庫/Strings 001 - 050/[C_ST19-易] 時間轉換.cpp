#include<iostream>
#include<string>
 
using namespace std;
 
int transfer(string s)
{
    if (s == "TW")
        return 0;
    else if (s == "JA")
        return 100;
    else if (s == "USE")
        return -1200;
    else if (s == "USC")
        return -1300;
    else if (s == "USW")
        return -1400;
    else if (s == "UK")
        return -800;
    return -1;
}
 
int main()
{
    int n;
    while (cin >> n && n > 0 && n < 10)
    {
        while (n--)
        {
            int time; 
            cin >> time;
             
            string x, y;
            cin >> x >> y;
 
            //transfer
            time += transfer(y) - transfer(x);
            time %= 2400;
 
            if (time < 0)
                time += 2400;
 
            //output
            printf("%04d ", time);
            cout << y << endl;
        }
    }
    return 0;
}
