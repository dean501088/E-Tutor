#include<iostream>
#include<vector>
#include<algorithm>
#include<stdlib.h>
#include<stdio.h>
 
using namespace std;
 
class dish
{
    public:
        double w;
        double p;
        dish(double x, double y)
            :w(x), p(y) {}
        dish() {}       
};
 
class sorted
{
    public:
        double w;
        double p;
        double per;
        int index;
 
        sorted(double x, double y, int z)
        :w(x), p(y), index(z) 
        {
            per = p / w;
        }
 
        bool operator<(const sorted &x) const
        {
            return x.per > per;
        }
};
 
int main()
{
    int n;
    while (cin >> n)
    {
        while (n--)
        {
            //input
            double w; cin >> w;
            vector<dish> dishes;
            vector<sorted> s;
 
            for (int i = 0; i < 3; i++)
                dishes.push_back(dish());
 
            for (int i = 0; i < 3; i++)
                cin >> dishes[i].w;
            for (int i = 0; i < 3; i++)
                cin >> dishes[i].p;
            for (int i = 0; i < 3; i++)
                s.push_back(sorted(dishes[i].w, dishes[i].p, i));
 
            sort(s.begin(), s.end());
 
            for (int i = 0; i < 3; i++)
            {
                if (w >= s[i].w)
                {
                    w -= s[i].w;
                    s[i].w = 0;
                }
                else
                {
                    s[i].w -= w;
                    w = 0;
                }
 
                if (w == 0)
                    break;
            }
 
            double sum = 0;
 
            //output
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (i == s[j].index)
                    {
                        //ate weight
                        dishes[i].w -= s[j].w;
                        sum += dishes[i].w * s[j].per;
                        break;
                    }
                }
            }
 
            if (w != 0)
                cout << "0" << endl;
            else
            {
                printf("%.3f %.3f ", dishes[0].w, dishes[1].w,);
                printf("%.3f %.3f\n", dishes[2].w, sum);
            }
        }
    }
    return 0;
}
