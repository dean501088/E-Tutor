#include<iostream>
#include<vector>
#include<cmath>
 
using namespace std;
 
double rounded(double var)
{
    var *= 10;
    var += 0.5;
    var = floor(var);
    var /= 10;
    return var;
}
 
int main()
{
    int n;
    while(cin >> n)
    {
        double ch = 0;
        double eng = 0;
        double math = 0;
         
        //input
        for(int i = 0; i < n; i++)
        {
            double temp[3];
            for(int j = 0; j < 3; j++)
                cin >> temp[j];
            ch += temp[0];
            eng += temp[1];
            math += temp[2];
        }
         
        double avg = 0;
        avg += ch;
        avg += eng;
        avg += math;
         
        avg /= n * 3;
        ch /= n;
        eng /= n;
        math /= n;
         
        avg = rounded(avg);
        ch = rounded(ch);
        eng = rounded(eng);
        math = rounded(math);
         
        printf("%.1lf %.1lf ", avg, ch);
        printf("%.1lf %.1lf\n", eng, math);
    }
    return 0;
}