#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main()
{
    vector<int> nums;
    for(int i = 0; i < 3; i++)
    for(int j = 0; j < 3; j++)
    {
        int temp; cin >> temp;
        nums.push_back(temp);
        cin.get();
    }
    sort(nums.begin(), nums.end());
 
    int max = 0;
    for(int i = 6; i < 9; i++)   
        max += nums[i];
    cout << max << endl;
    return 0;
}