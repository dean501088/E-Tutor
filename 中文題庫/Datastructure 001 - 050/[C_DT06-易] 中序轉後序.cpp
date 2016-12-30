#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <stack>
#include <fstream>

using namespace std;

int get_priority(char c) {
	if (c == '(')
		return 3;
	else if (c == ')')
		return 0;
	else if (c == '*' || c == '/')
		return 2;
	else
		return 1;
}

int main() {
	// var
	int n;
	cin >> n;
	cin.get();

	while (n--) {
		// var
		string buffer;
		stack<string> s;
		vector<string> in;
		vector<string> out;

		// input
		getline(cin, buffer);

		// pre
		istringstream ss(buffer);
		while (getline(ss, buffer, ' ')) {
			in.push_back(buffer);
		}

		for (int i = 0; i < in.size(); i++) {
			if (isdigit(in[i][0])) {
				out.push_back(in[i]);
			}
			else if (in[i] == "(") {
				s.push(in[i]);
			}
			else if (in[i] == ")") {
				while (!s.empty() && s.top() != "(") {
					out.push_back(s.top());
					s.pop();
				}
				out.push_back(s.top());
				s.pop();
			}
			else if (in[i] == "+" || in[i] == "-") {
				while (!s.empty() && (s.top() == "+" || s.top() == "-" || s.top() == "*" || s.top() == "/")) {
					out.push_back(s.top());
					s.pop();
				}
				s.push(in[i]);
			}
			else if (in[i] == "*" || in[i] == "/") {
				if (!s.empty() && (s.top() == "*" || s.top() == "/")) {
					out.push_back(s.top());
					s.pop();
				}
				s.push(in[i]);
			}
		}
		
		while (!s.empty()) {
			out.push_back(s.top());
			s.pop();
		}

		bool first = true;
		for (int i = 0; i < out.size(); i++) {
			if (out[i] != "(" && out[i] != ")") {
				if (!first) {
					cout << " ";
				}
				else {
					first = false;
				}
				cout << out[i];
			}
		}
		cout << endl;
	}
	return 0;
}