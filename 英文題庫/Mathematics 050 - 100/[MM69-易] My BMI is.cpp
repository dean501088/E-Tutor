#include<iostream>
  
using namespace std;
  
int main()
{
    double h, w;
    while(cin >> h >> w)
    {
        double bmi = w;
        bmi /= h / 100;
        bmi /= h / 100;
          
        printf("%.1lf ", bmi);
          
        if(bmi < 18.5)
            cout << "underweight\n";
        else if(bmi < 24)
            cout << "normal\n";
        else if(bmi < 27)
            cout << "overweight\n";
        else if(bmi < 30)
            cout << "mild obesity\n";
        else if(bmi < 35)
            cout << "moderate obesity\n";
        else
            cout << "severe obesity\n";
    }
    return 0;
}