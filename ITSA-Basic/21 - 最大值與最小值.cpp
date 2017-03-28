#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main()
{
    vector<double> num;
 
    for (int i = 0; i < 10; i++)
    {
        double temp; cin >> temp;
        num.push_back(temp);
    }
    sort(num.begin(), num.end());
    printf("maximum:%.2f\n", num[9]);
    printf("minimum:%.2f\n", num[0]);
    return 0;
}