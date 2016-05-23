#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main()
{   
    //input
    vector<double> s[3];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            double temp; cin >> temp;
            s[i].push_back(temp);
            cin.get();  
        }
        sort(s[i].begin(), s[i].end());
    }
     
    double avg = 0;
    for(int i = 0; i < 3; i++)
    for(int j = 0; j < 3; j++)
        avg += s[i][2 + j];
    printf("%.2lf\n", avg / 9);
    return 0;
}