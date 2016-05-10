#include<iostream>
#include<vector>
 
using namespace std;
 
int main()
{
    int n;
    while (cin >> n)
    {
        vector<double> num;
        double average = 0;
 
        while (n--)
        {
            double temp; cin >> temp;
            num.push_back(temp);
            average += temp;
        }
        average /= num.size();
 
        int count = 0;
        for (int i = 0; i < num.size(); i++)
            if (num[i] > average)
                count++;
        cout << count << endl;
    }
    return 0;
}