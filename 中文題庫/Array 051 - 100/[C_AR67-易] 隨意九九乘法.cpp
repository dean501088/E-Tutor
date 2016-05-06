#include<iostream>
 
using namespace std;
 
int main()
{
    //input
    int n[6];
    for(int i = 0; i < 6; i++)
        cin >> n[i];
    //output
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            printf("%03d", n[i] * n[j]);
            if(j < 5)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}