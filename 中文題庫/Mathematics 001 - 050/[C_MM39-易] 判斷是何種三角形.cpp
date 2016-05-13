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
     
    int y = 0;
    y += x[0] * x[0];
    y += x[1] * x[1];
     
    int z = x[2] * x[2];
     
    if(x[0] + x[1] < x[2] + 1)
        cout << "Not Triangle";
    else if(y == z)
        cout << "Right Triangle";
    else if(y < z)
        cout << "Obtuse Triangle";
    else
        cout << "Acute Triangle";
    cout << endl;
    return 0;
}