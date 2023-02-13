#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
    cin >> T;
    while(T--) {
    	int N;
        cin >> N;
        long long int factorial = 1;
        for(int i = N; i > 0; i--) {
        	factorial *= i;
        }
        cout << factorial << endl;
    }
    return 0;
}