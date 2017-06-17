#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <sstream>
#include <cstdlib>
#include <algorithm>

using namespace std;

bool compare(pair<char, int> x, pair<char, int> y) {
	return x.first > y.first || (x.first == y.first && x.second > y.second);
}

int main () {
	// var
	int n;
	cin >> n;
	cin.get();

	while (n--) {
		// var
		string buffer;
		vector< pair<char, int> > v;

		// input
		getline(cin, buffer);

		// split
		stringstream ss(buffer);

		while (getline(ss, buffer, ' '))
			v.push_back(pair<char, int>(buffer[0], atoi(buffer.substr(1).c_str())));

		sort(v.begin(), v.end(), compare);

		for (int i = 0; i < v.size(); i++) {
			cout << v[i].first << v[i].second;
			if (i < v.size() - 1)
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}