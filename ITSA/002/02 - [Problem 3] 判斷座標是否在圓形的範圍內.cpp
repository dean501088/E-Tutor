#include<iostream>
using namespace std;
int main()
{
    int x, y;
    while(cin >> x >> y && x<301 && y<301)
    {
        if(x*x+y*y<=10000) cout << "inside" << endl;
        else cout << "outside" << endl;
    }
    return 0;
}