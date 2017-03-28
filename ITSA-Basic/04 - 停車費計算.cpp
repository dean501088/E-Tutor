#include <iostream>  

using namespace std;  

int main() {  
    // var
    int x, y, a, b;

    while(cin >> x >> y >> a >> b) {  
        if((a-x)*60+(b-y)>240)  
            cout << 280+((((a-x)*60+(b-y))/30)-8)*60 << endl;  
        else if((a-x)*60+(b-y)>120)  
            cout << 120+((((a-x)*60+(b-y))/30)-4)*40 << endl;  
        else 
            cout << ((((a-x)*60+(b-y))/30))*30 << endl;  
    }  
    return 0;  
}  