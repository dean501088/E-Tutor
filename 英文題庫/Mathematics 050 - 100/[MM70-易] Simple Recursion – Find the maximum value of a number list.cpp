#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main()
{
    vector<int> nums;
    int temp;
    while(cin >> temp)
        nums.push_back(temp);
    sort(nums.begin(), nums.end());
    cout << nums[nums.size() - 1];
    cout << endl;
    return 0;
}