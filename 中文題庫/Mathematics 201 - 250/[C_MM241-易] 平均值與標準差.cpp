#include<iostream>
#include<cmath>
#include<vector>
 
using namespace std;
 
int main()
{
    vector<double> num;
    double mean = 0;
 
    for (int i = 0; i < 20; i++)
    {
        double temp; cin >> temp;
        num.push_back(temp);
        mean += temp;
 
        char c; cin.get(c);
        if (c == '\n')
            break;
    }
    mean /= num.size();
 
    double deviation = 0;
 
    for (int i = 0; i < num.size(); i++)
        deviation += pow(num[i] - mean, 2.0);
    deviation /= num.size();
    deviation = pow(deviation, 0.5);
 
    printf("Mean = %.2f\n", mean);
    printf("Deviation = %.2f\n", deviation);
    return 0;
}