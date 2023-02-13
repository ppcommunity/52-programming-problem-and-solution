#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
    cin >> T;
    while(T--) {
    	int r1, r2, B;
        cin >> r1 >> r2 >> B;
        
        int balls_played = 300 - B;
        float current_run_rate = (float(r2) / balls_played) * 6;
        
        int runs_required = (r1 + 1) - r2;
        float required_run_rate = (float(runs_required) / B) * 6;
        if(r1 < r2) {
        	required_run_rate = 0.00;
        }
        
        cout << setprecision (2) << fixed;
        cout << current_run_rate << " " << required_run_rate << endl;
    }
    return 0;
}