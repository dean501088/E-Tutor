#include<iostream>
  
using namespace std;
  
int main()
{
    double h, w;
    while(cin >> h >> w)
    {
        double bmi = w;
        bmi /= h * h;
          
        if(bmi < 18.5)
            cout << "Underweight\n";
        else if(bmi < 24)
            cout << "Normal\n";
        else if(bmi < 27)
            cout << "Overweight\n";
        else if(bmi < 30)
            cout << "Obese Class 1\n";
        else if(bmi < 35)
            cout << "Obese Class 2\n";
        else
            cout << "Obese Class 3\n";
        printf("BMI=%.4lf\n", bmi);
    }
    return 0;
}