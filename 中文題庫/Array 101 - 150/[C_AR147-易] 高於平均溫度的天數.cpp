#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
 
using namespace std;
 
class month
{
    public:
        month(string a, int b)
        :s(a), days(b) {}
        month() {}
        string s;
        int days;
};
 
int main()
{
    month m[12];
    m[0] = month("Jan", 31);
    m[1] = month("Feb", 28);
    m[2] = month("Mar", 31); 
    m[3] = month("Apr", 30); 
    m[4] = month("May", 31); 
    m[5] = month("Jun", 30); 
    m[6] = month("Jul", 31); 
    m[7] = month("Aug", 31); 
    m[8] = month("Sep", 30); 
    m[9] = month("Oct", 31); 
    m[10] = month("Nov", 30);
    m[11] = month("Dec", 31);
 
    string s;
    vector<double> d;
 
    while (cin >> s)
    {
        double average = 0;
 
        for (int i = 0; i < 12; i++)
        {
            if (s == m[i].s)
            {
                for (int j = 0; j < m[i].days; j++)
                {
                    double temp; cin >> temp;
                    d.push_back(temp);
                    average += temp;
                }
                average /= m[i].days;
                sort(d.begin(), d.end());
                break;
            }
        }
 
        int count = 0;
 
        for (int i = 0; i < d.size(); i++)
            if (d[i] > average)
                count++;
 
        cout << "average temperature for " << s;
        printf(" is %.2f\n", average);
        printf("%d days above average\n", count);
    }
    return 0;
}