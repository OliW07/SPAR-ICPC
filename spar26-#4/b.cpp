
#include <bits/stdc++.h> 

using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}


int main() {
    fast_io();
    
    int t = 1;
    int N = 1;
    cin >> t;
    while (t--) {
        string n; cin >> n;
        if(n == "mumble"){
            N++;
            continue;
        }

        int num = stoi(n);

        if(N != num){
            cout << "something is fishy";
            return 0;
        }

        N++;


    }

    cout << "makes sense";
    
    return 0;
}
