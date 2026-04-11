
#include <bit>
#include <bits/stdc++.h> 
using namespace std;

typedef long long ll;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
int main() {
    fast_io;
    double t = 1;
    cin >> t;
    if(t == 1.0) {
        cout << "1 bit";
        return 0;
    }

    uint64_t res = (uint64_t)ceil(log2(t));
    
    res = (1ULL << (64-__builtin_clzll(res)));

    cout << res << " bits";
 
    return 0;
}
