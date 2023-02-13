#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
    cin >> T;
    while(T--) {
    	int N;
        cin >> N;
        
        int rem = N % 10;
        int sum = rem;
        N /= 10;
        while(N) {
        	rem = N % 10;
            N /= 10;
        }
        sum += rem;
        cout << "Sum = " << sum << endl;
    }
    return 0;
}