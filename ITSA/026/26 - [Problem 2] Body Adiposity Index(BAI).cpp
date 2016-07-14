#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    while(cin >> n && (n > 0 && n < 10))
    {   
        while(n--)
        {
            double hip; cin >> hip;
            double height; cin >> height;
 
            double bai = (hip / pow(height, 1.5)) - 18;
 
            if(bai > 40)
                cout << "morbidly obese" << endl;
            else if(bai >= 30 && bai <= 39.9)
                cout << "obese" << endl;
            else if(bai >= 25 && bai <= 29.9)
                cout << "overweight" << endl;
            else if(bai >= 18.5 && bai <= 24.9)
                cout << "healthy" << endl;
            else if(bai < 18.5)
                cout << "underweight" << endl;
        }
    }
    return 0;
}