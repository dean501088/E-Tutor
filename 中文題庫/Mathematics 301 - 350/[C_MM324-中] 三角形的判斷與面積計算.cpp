#include<iostream>
#include<cmath>
  
using namespace std;
  
bool isTriangle(double e[])
{
    return (e[0] + e[1] > e[2]
    && e[0] + e[2] > e[1] 
    && e[1] + e[2] > e[0]);  
}
  
bool isRegular(double e[])
{
    for(int i = 1; i < 3; i++)
        if(e[i] != e[0])
            return false;
    return true;
} 
  
bool isRight(double e[])
{
    int x = e[0] * e[0];
    int y = e[1] * e[1];
    int z = e[2] * e[2];
      
    return (x + y == z
    || x + z == y 
    || y + z == x); 
} 
  
bool isObtuse(double e[])
{
    int x = e[0] * e[0];
    int y = e[1] * e[1];
    int z = e[2] * e[2];
      
    return (x + y < z
    || x + z < y 
    || y + z < x);   
      
} 
  
bool isAcute(double e[])
{
    int x = e[0] * e[0];
    int y = e[1] * e[1];
    int z = e[2] * e[2];
      
    return (x + y > z
    || x + z > y 
    || y + z > x);   
} 
  
int main()
{
    double edge[3];
    while(cin >> edge[0])
    {
        double s = 0;
        s = edge[0];
     
        for(int i = 1; i < 3; i++)
        {
            cin >> edge[i];
            s += edge[i];
        }
        s /= 2;
          
        if(!isTriangle(edge))
            cout << "Cannot form a triangle\n";
        else
        {
            double area = s;
            for(int i = 0; i < 3; i++)
                area *= s - edge[i];
            area = pow(area, 0.5);
             
            cout << "Can form a triangle: ";
            if(isRegular(edge))
                cout << "regular triangle";
            else if(isRight(edge))
                cout << "right triangle";
            else if(isObtuse(edge))
                cout << "obtuse triangle";
            else if(isAcute(edge))
                cout << "acute triangle";
            printf(" %.2lf\n", area);
        }
    }
}