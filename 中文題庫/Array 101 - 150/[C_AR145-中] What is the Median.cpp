#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main()
{
    vector<double> num;
 
    for (int i = 0; i < 10; i++)
    {
        double temp; cin >> temp;
        num.push_back(temp);
    }
    sort(num.begin(), num.end());
    for (int i = 0; i < 10; i++)
    {
        cout << num[i];
        if (i < 9)
            cout << " ";
    }
    printf("\nMedian:%.2f\n", (num[4] + num[5]) / 2);
    return 0;
}