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
         
        printf("%.2lf\n", bmi);
         
        if(bmi < 18.5)
            cout << "Underweight\n";
        else if(bmi < 24)
            cout << "Normal\n";
        else if(bmi < 27)
            cout << "Overweight\n";
        else if(bmi < 30)
            cout << "Obese Class I\n";
        else if(bmi < 35)
            cout << "Obese Class II\n";
        else
            cout << "Obese Class III\n";
    }
    return 0;
}