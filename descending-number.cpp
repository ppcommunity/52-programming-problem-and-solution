#include <bits/stdc++.h>
using namespace std;

int main() {
	for(int index = 1000; index > 0; index--) {
        if(index != 1000 && index % 5 == 0) {
        	cout << endl;
        }
    	cout << index << "\t";
    }
}