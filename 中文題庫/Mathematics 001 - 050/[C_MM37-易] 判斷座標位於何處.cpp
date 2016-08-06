#include<iostream>
 
using namespace std;
 
int main()
{
    double x, y;
    while(cin >> x >> y)
    {
        if(!(x == 0 && y == 0))
        {
            if(x == 0)
                cout << "y-axis";
            else if(y == 0)
                cout << "x-axis";
            else if(x > 0 && y > 0)
                cout << "1st Quadrant";
            else if(x < 0 && y > 0)
                cout << "2nd Quadrant";
            else if(x < 0 && y < 0)
                cout << "3rd Quadrant";
            else
                cout << "4th Quadrant";
        }
        cout << endl;
    }   
    return 0;
}