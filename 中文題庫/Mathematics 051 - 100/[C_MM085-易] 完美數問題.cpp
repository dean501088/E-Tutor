#include<iostream>
#include<vector>
 
#define MAX 999999
 
using namespace std;
 
int main()
{
    int perfect[5] = { 6, 28, 496, 8128,
        33550336 };
 
    int n;
    while (cin >> n)
    {
        vector<int> temp;
 
        for (int i = 0; i < 5; i++)
        {
            if (n >= perfect[i])
                temp.push_back(perfect[i]);
        }
 
        for (int i = 0; i < temp.size(); i++)
            cout << temp[i] << " ";
        cout << "is perfect number" << endl;
    }
    return 0;
}