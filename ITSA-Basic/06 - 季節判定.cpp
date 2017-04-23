#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    while(cin >> n) {
        if(n > 2 && n < 6)
            cout << "Spring";
        else if(n > 5 && n < 9)
            cout << "Summer";
        else if(n > 8 && n < 12)
            cout << "Autumn";
        else
            cout << "Winter";
        cout << endl;
    }
    return 0;
}