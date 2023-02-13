#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
    cin >> T;
    while(T--) {
    	int N;
        cin >> N;
        for(int x = 0; x < N; x++) {
        	for(int y = 0; y < N; y++) {
            	cout << "*";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}