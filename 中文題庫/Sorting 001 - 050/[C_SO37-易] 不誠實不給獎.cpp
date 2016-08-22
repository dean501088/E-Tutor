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
         
        int last = score.size() - 1;
        vector<int> rank;
         
        for(int i = last; i > -1; i--)
        {
            if(score[i] % 2 == 0 
            &&score[i] > 89)
            {
                rank.push_back(score[i]);
            }
             
            if(rank.size() == 2)
                break;
        }
         
        for(int i = 0; i < 2; i++)
        {
            if(rank.size() < i + 1)
                cout << "x";
            else
                cout << rank[i];
         
            cout << endl; 
        }
    }
    return 0;
} 