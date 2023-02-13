#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
    cin >> T;
    while(T--) {
    	char c;
    	string line;
        cin >> c;
        getline (cin, line);
        line = c + line;
        // cout << line << endl;
        int length = line.size();
        int k = 1;
        for(int i = 0; i < length; i++) {
        	if(line[i] == ' ' && line[i + 1] != ' ') {
            	++k;
            }
        }
        cout << k << endl;
    }
    return 0;
}