#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	getline(cin, s);
	printf("There are %d ", s.length());
	printf("characters\n");
	return 0;
}