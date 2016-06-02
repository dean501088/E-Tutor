#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
class grade
{
    public:
        int math;
        int eng;
        int id;
         
        grade(int i, int m, int e)
        :id(i), math(m), eng(e) {}
         
        bool operator<(const grade &x)const
        {
            if(math != x.math)
                return math > x.math;
            else
                return eng > x.eng; 
        }
};
 
int main()
{
    int n;
    while(cin >> n)
    {
        vector<grade> g;
         
        while(n--)
        {
            int id; cin >> id;
            int math; cin >> math;
            int eng; cin >> eng;
             
            g.push_back(grade(id, math, eng));
        }   
        sort(g.begin(), g.end());
         
        for(int i = 0; i < g.size(); i++)
            printf("%d %d %d\n", 
            g[i].id, g[i].math, g[i].eng);
    }
    return 0;
}