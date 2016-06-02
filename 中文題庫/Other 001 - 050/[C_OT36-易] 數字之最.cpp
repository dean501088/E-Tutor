#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{   
    string s;
    while(cin >> s)
    {       
        int count[10] = { 0 };
        int max = -1;
         
        for(int i = 0; i < s.length(); i++)
        count[s[i] - '0']++;
         
        //find max
        for(int i = 0; i < 10; i++)
            if(max < count[i])
                max = count[i];
         
        //print
        for(int i = 0; i < 10; i++)
        if(max == count[i])
            printf("Number is %d\n", i);
    }
    return 0;
}