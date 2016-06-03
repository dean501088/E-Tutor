#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    int n;
    while (cin >> n && n)
    {
        while (n--)
        {
            string x, y;
            cin >> x >> y;
 
            if (x == y)
            {
                cout << "0" << endl;
            }
            else
            {
                if (x == "rock" &&
                   (y == "lizard" || y == "scissors"))
                {
                    cout << "1" << endl;
                }               
                else if (x == "paper" &&
                        (y == "rock" || y == "Spock"))
                {
                    cout << "1" << endl;
                }
                else if (x == "scissors" && 
                        (y == "paper" || y == "lizard"))
                {
                    cout << "1" << endl;
                }
                else if (x == "lizard" && 
                        (y == "Spock" || y == "paper"))
                {
                    cout << "1" << endl;
                }
                else if (x == "Spock" && 
                        (y == "scissors" || y == "rock"))
                {
                    cout << "1" << endl;
                }
                else
                    cout << "2" << endl;
            }
        }
    }
    return 0;
}