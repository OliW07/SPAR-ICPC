
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
    int m = 1;
    cin >> t;
    cin >> m;

    vector<pair<int, string>> ppl;

    while(t-- > 0){
        string name;
        int money;
        cin >> name;
        cin >> money;
        ppl.push_back({money, name});

    }

    sort(ppl.begin(), ppl.end());

    vector<string> res;

    for(int i = 0; i < ppl.size(); i++){
        int cur = 0;
        for(int j = i; j < ppl.size(); j++){
            cur += ppl[j].first;
            if(cur == m){
                for(int a = i; a <= j; a++){
                    res.push_back(ppl[a].second);
                }
                break;
            }else if(cur > m){
                break;
            }

        }
    }

    cout << res.size() << "\n";
    
    for(string p : res){
        cout << p << "\n";
    }
    

    
    return 0;
}
