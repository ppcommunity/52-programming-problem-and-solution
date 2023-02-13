#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
    cin >> T;
    while(T--) {
    	int N;
        cin >> N;
        
        int fives = 0, twos = 0;
        for(int i = N; i > 0; i--) {
        	int num = i;
        	while(num % 2 == 0 || num % 5 == 0) {
            	if(num % 2 == 0) {
                	++twos;
                    num /= 2;
                }
                if(num % 5 == 0) {
                	++fives;
                    num /= 5;
                }
            }
        }
        fives < twos ? cout << fives << endl : cout << twos << endl;
    }
    return 0;
}