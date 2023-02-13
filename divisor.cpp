#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
    cin >> T;
    for(int tc = 1; tc <= T; tc++) {
    	int N;
        cin >> N;
        cout << "Case " << tc << ": ";
        for(int idx = 1; idx <= N; idx++) {
        	if(N % idx == 0) {
            	cout << idx;
            	if(idx != N) {
            		cout << " ";
            	}
            }
        }
        cout << endl;
    }
}