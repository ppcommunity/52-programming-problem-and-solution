#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
	int T;
    cin >> T;
    while(T--) {
    	string sentence;
        char c;
        cin >> c;
        getline(cin, sentence);
        sentence = c + sentence;
        
        stringstream ss(sentence);
        vector<string> words;
    	string word;
    	while(ss >> word) {
        	words.push_back(word);
    	}
        int length = words.size();
        
        int total_count = 0;
        for(int i = 0; i < length; i++) {
            string str = words[i];
            int cnt = 0;
        	for(int j = i + 1; j < length; j++) {
        		if((str == words[j]) && (words[j] != "0")) {
                	cnt++;
                    words[j] = '0';
                }
            }
            if(cnt) total_count += (cnt + 1);
        }
        
        if(total_count) {
        	cout << "1/" << factorial(length) / total_count << endl;
        } else {
        	cout << "1/" << factorial(length) << endl;
        }
    }
	return 0;
}
