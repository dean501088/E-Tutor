#include <iostream> 

using namespace std;  

int main() {  
    // var
    int x;  
    
    while(cin >> x) { 
        // var 
        int y[8]; 

        if (x > 0)  
            y[0] = 0;  
        else {  
            y[0] = 1;  
            x += 128;  
        }  

        for (int i = 0; i < 7; i++) {  
            y[7 - i] = x % 2;  
            x /= 2;  
        }  
        for(int i = 0; i < 8; i++)  
            cout << y[i];  
        cout << endl;  
    }  
    return 0;  
}  