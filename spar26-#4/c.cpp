#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> d(n);
    for (int i = 0; i < n; i++) cin >> d[i];

    int cleans = 0;
    int cleanDay = 0;
    
    
    int start = 0; 
    
    for (int j = 0; j < n; j++) {

        int count = j - start + 1;
        long long sumD = 0;
        for (int k = start; k <= j; k++) sumD += d[k];
        
        long long dirty = (long long)count * d[j] - sumD;
        
        if (dirty >= 20) {
            cleans++;
            start = j;
        }
    }
    
    if (start < n) cleans++;
    
    cout << cleans << endl;
    return 0;
}
