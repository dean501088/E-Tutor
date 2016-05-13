#include<iostream>
#include<vector>
 
using namespace std;
 
int main()
{
    int n;
    while (cin >> n)
    {
        int sum = 0;
 
        vector<int> num;
        for (int i = 0; i < n; i++)
        {
            int temp; cin >> temp;
            num.push_back(temp);
        }
 
        for (int i = 0; i < n; i++)
        {
            int temp; cin >> temp;
            sum += num[i] * temp;
        }
        cout << (sum == 0) << endl;
    }
    return 0;
}