#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
 
using namespace std;
 
class obj
{
    public:
        obj(string var)
        {
            num = var;
            sum = 0;
 
            for (int i = 0; i < num.length(); i++)
                sum += num[i] - '0';
        }
        obj() {}
        string num;
        int sum;
 
        bool operator < (const obj &x) const
        {
            if (x.sum == sum)
            {
                if (x.num.length() == num.length())
                    return x.num > num;
                return x.num.length() > num.length();
            }
            return x.sum > sum;
        }
};
 
int main()
{
    int n;
    while (cin >> n && n < 10)
    {
        vector<obj> data;
 
        while (n--)
        {
            string temp; cin >> temp;
            data.push_back(obj(temp));
        }
        sort(data.begin(), data.end());
 
        for (int i = 0; i < data.size(); i++)
        {
            cout << data[i].num;
 
            if (i < data.size() - 1)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}