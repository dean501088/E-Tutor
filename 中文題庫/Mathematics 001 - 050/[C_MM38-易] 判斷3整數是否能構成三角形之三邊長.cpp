#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main()
{
    vector<int> x;
    for(int i = 0; i < 3; i++)
    {
        int temp; cin >> temp;
        x.push_back(temp);
    }
    sort(x.begin(), x.end());
     
    if(x[0] + x[1] > x[2])
        cout << "fit";
    else
        cout << "unfit";
    cout << endl;
    return 0;
}