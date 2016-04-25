#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main()
{
    int n;
    while(cin >> n)
    {
        vector<int> score;
         
        while(n--)
        {
            int temp; cin >> temp;
            score.push_back(temp);
        }
        sort(score.begin(), score.end());
         
        for(int i = 0; i < score.size(); i++)
            cout << score[i] << endl;
    }
    return 0;
}