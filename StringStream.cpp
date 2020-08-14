#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
	stringstream ss(str);
	vector<int> vect;
	char ch;
	int temp;
	int n_comma = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ',') {
			n_comma++;
		}
	}

	for (int i = 0; i<n_comma + 1; i++) {
		ss >> temp >> ch;

		vect.push_back(temp);

	}


	return vect;
}

int main() {
	string str;
	cin >> str;
	vector<int> integers = parseInts(str);
	for (int i = 0; i < integers.size(); i++) {
		cout << integers[i] << "\n";
	}

	return 0;
}
