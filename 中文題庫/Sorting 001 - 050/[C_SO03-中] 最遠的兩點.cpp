#include<iostream>    
#include<vector>    
 
using namespace std; 
    
class Point    
{    
    public:    
        Point(int xvalue, int yvalue)    
        {    
            x=xvalue;      
            y=yvalue;    
        }    
        Point() {}    
        int x, y;    
};    
 
int main()    
{    
    int n;    
    while(cin >> n && n)    
    {    
        while(n--)    
        {    
            int m; cin >> m;    
            vector<Point> p;    
            while(m--)    
            {    
                int x, y; cin >> x >> y;    
                p.push_back(Point(x, y));    
            }    
     
            //max distance    
            int max=0;    
            for(int i=0;i<p.size();i++)    
                for(int j=0;j<p.size();j++)    
                    if((p[i].x-p[j].x)*(p[i].x-p[j].x)+(p[i].y-p[j].y)*(p[i].y-p[j].y)>max)    
                        max=(p[i].x-p[j].x)*(p[i].x-p[j].x)+(p[i].y-p[j].y)*(p[i].y-p[j].y);    
     
            cout << max << endl;    
        }    
             
    }    
    return 0;    
}  