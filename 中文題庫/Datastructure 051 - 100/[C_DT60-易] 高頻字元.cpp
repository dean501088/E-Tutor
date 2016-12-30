#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	// var
	string s;

	while (getline(cin, s)) {
		// var
		vector<char> arr;

		for (int i = 0; i < s.length(); i++) {
			arr.push_back(s[i]);
		}

		sort(arr.begin(), arr.end());
		
		int max = 1;
		int index = 0;
		int counter = 1;

		for (int i = 1; i < arr.size(); i++) {
			if (arr[i] != arr[i - 1]) {
				counter = 1;
			}
			else {
				counter++;
			}

			if (counter > max) {
				max = counter;
				index = i;
			}
		}

		cout << arr[index] << endl;

		cin.get();
	}
	return 0;
}