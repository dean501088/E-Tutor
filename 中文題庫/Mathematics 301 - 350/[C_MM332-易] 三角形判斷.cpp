#include<iostream>
 
using namespace std;
 
bool isTriangle(int e[])
{
    return (e[0] + e[1] > e[2]
    && e[0] + e[2] > e[1] 
    && e[1] + e[2] > e[0]);  
}
 
bool isRegular(int e[])
{
    for(int i = 1; i < 3; i++)
        if(e[i] != e[0])
            return false;
    return true;
} 
 
bool isRight(int e[])
{
    int x = e[0] * e[0];
    int y = e[1] * e[1];
    int z = e[2] * e[2];
     
    return (x + y == z
    || x + z == y 
    || y + z == x); 
} 
 
bool isObtuse(int e[])
{
    int x = e[0] * e[0];
    int y = e[1] * e[1];
    int z = e[2] * e[2];
     
    return (x + y < z
    || x + z < y 
    || y + z < x);   
     
} 
 
bool isAcute(int e[])
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
    int n;
    while(cin >> n)
    while(n--)
    {
        int edge[3];
        cin >> edge[0];
        cin.get();
        cin >> edge[1];
        cin.get();
        cin >> edge[2];
        cin.get();
         
        if(!isTriangle(edge))
            cout << "Not Triangle\n";
        else if(isRegular(edge))
            cout << "Regular Triangle\n";
        else if(isRight(edge))
            cout << "Right Triangle\n";
        else if(isObtuse(edge))
            cout << "Obtuse Triangle\n";
        else if(isAcute(edge))
            cout << "Acute Triangle\n";
    }
}