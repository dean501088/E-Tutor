#include <iostream>
#include <string>

using namespace std;

int main() {
	// var
	string s;

	while (cin >> s && s != "0") {
		for (int i = 0; i < s.length(); i++)
			cout << s[i] << " ";
		cout << endl;
	}
	return 0;
}