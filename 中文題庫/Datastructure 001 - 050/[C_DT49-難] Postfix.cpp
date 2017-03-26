#include <iostream>
#include <string>
#include <stack>
#include <sstream>
#include <cstdlib>

using namespace std;

int operation(int x, int y, char c) {
	// var
	int result = 0;

	// operation
	switch (c) {
		case '+':
			result = x + y;
			break;
		case '-':
			result = x - y;
			break;
		case '*':
			result = x * y;
			break;
		case '/':
			result = x / y;
			break;
		case '%':
			result = x % y;
			break;
	}
	return result;
}

int main () {
	// var
	stack<int> s;
	string buffer;

	// input
	getline(cin, buffer);

	// split
	stringstream ss(buffer);

	while (getline(ss, buffer, ' ')) {
		if (isdigit(buffer[buffer.length() - 1])) {
			s.push(atol(buffer.c_str()));
		}
		else {
			int y = s.top();
			s.pop();
			int x = s.top();
			s.pop();

			s.push(operation(x, y, buffer[0]));
		}
	}
	cout << s.top() << endl;
	return 0;
}