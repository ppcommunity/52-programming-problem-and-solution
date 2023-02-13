#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--) {
		string N;
		cin >> N;
        int length = N.size();
        int last_digit = stoi(N[length - 1]);
		if(last_digit % 2 == 0) {
        	cout << "even" << endl;
        } else {
        	cout << "odd" << endl;
        }
	}
}