#include<iostream>
#include<string>
 
using namespace std;
 
int toIndex(string s)
{
    string data[4] = {
        "A", "B",
        "AB", "O"
    };
    for(int i = 0; i < 4; i++)
        if(s == data[i])
            return i;
}
 
int main()
{
    string table[4][4];
    // A*A
    table[0][0] = "1001";
    // A*B
    table[0][1] = "1111";
    // A*AB
    table[0][2] = "1110";
    // A*O
    table[0][3] = "1001";
     
    // B*A
    table[1][0] = "1111";
    // B*B
    table[1][1] = "0101";
    // B*AB
    table[1][2] = "1110";
    // B*O
    table[1][3] = "0101";
 
    // AB*A
    table[2][0] = "1110";
    // AB*B
    table[2][1] = "1110";
    // AB*AB
    table[2][2] = "1110";
    // AB*O
    table[2][3] = "1100";
     
    // O*A
    table[3][0] = "1001";
    // O*B
    table[3][1] = "0101";
    // O*AB
    table[3][2] = "1100";
    // O*O
    table[3][3] = "0001";   
     
    int n;
    while(cin >> n)
    while(n--)
    {
        string f, m, c;
        cin >> f >> m >> c;
         
        int x = toIndex(f);
        int y = toIndex(m);
        int z = toIndex(c);
         
        if(table[x][y][z] == '1')
            cout << "YES\n";
        else
            cout << "IMPOSSIBLE\n";
    }
    return 0;
}