#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
    cin >> T;
    while(T--) {
    	int N;
        cin >> N;
        int root = sqrt(N);
        if(root == sqrt(N)) {
        	cout << "YES" << endl;
        } else {
        	cout << "NO" << endl;
        }
    }
    return 0;
}