#include<iostream>    
     
using namespace std;    
     
int main()    
{    
    int score; cin >> score;    
    int assist; cin >> assist;    
    int rebound; cin >> rebound;    
    int steal; cin >> steal;    
    int error; cin >> error;    
         
    int mvp = 0;    
    mvp += score;    
    mvp += assist * 2;    
    mvp += rebound * 2;    
    mvp += steal * 2;    
    mvp -= error * 2;    
         
    if(mvp > 45)    
        cout << "A";    
    else if(mvp > 34)    
        cout << "B";    
    else if(mvp > 25)    
        cout << "C";    
    else   
        cout << "D";    
    cout << endl;    
         
    return 0;    
}  