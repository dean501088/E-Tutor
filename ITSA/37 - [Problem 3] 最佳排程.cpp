#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
 
int main()
{
    int n; cin >> n;
    while (n--)
    {
        vector<int> time;
 
        int max; cin >> max;
        while (true)
        {
            int temp; cin >> temp;
             
            if (temp == 0)
                break;
            else
            {
                time.push_back(temp);
            }
        }
        sort(time.begin(), time.end());
 
        int count = 0;
        for (int i = 0; i < time.size(); i++)
        {
            max -= time[i];
 
            if (max < 0)
                break;
 
            count++;
        }
        cout << count << endl;
    }
    return 0;
}