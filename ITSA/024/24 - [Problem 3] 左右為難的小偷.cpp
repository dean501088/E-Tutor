#include<iostream>    
#include<string>    
#include<vector>    
      
using namespace std;    
      
class bag    
{    
    public:    
        string name;    
        float values;    
        float weight;    
      
        bag() {}    
        bag(string a, float b, float c)    
            :name(a), values(b), weight(c) {}    
};    
      
float totalWeight(vector<bag> b)    
{    
    float total = 0;    
    for (int i = 0; i < b.size(); i++)    
        total += b[i].weight;    
      
    return total;    
}    
      
float totalValues(vector<bag> b)    
{    
    float total = 0;    
    for (int i = 0; i < b.size(); i++)    
        total += b[i].values;    
      
    return total;    
}    
      
int main()    
{    
    int values[20] = { 0 };    
      
    vector<bag> b;    
    for (int i = 0; i < 5; i++)    
    {    
        string name; cin >> name;    
        float values, weight;    
        cin >> values >> weight;    
      
        if (totalWeight(b) + weight <= 20)    
        {    
            b.push_back(bag(name, values, weight));    
        }    
        else   
        {    
            int skip = -1;    
            for (int i = 0; i < b.size(); i++)    
            {    
                int index = b.size() - 1 - i;    
                float remain = 20 - totalWeight(b);    
      
                int temp = remain - weight;    
      
                if (b[index].values < values    
                    && temp + b[index].weight >= 0)    
                {    
                    b.erase(b.begin() + index);    
                    b.push_back(bag(name, values, weight));    
                    break;    
                }    
            }    
        }    
    }    
    for (int i = b.size() - 1; i > -1; i--)    
    {    
        cout << b[i].name << " ";    
        printf("%.1f %.1f\n", b[i].values, b[i].weight);    
    }    
      
    printf("weight:%.1f\n", totalWeight(b));    
    printf("value:%.1f\n", totalValues(b));     
      
    return 0;    
}  