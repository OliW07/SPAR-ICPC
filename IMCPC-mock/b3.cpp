#include <bits/stdc++.h>

using namespace std;

int main(){

    typedef long long ll;
    map<ll,ll> freq = {};
    vector<ll> keys = {};

    int N;
    cin >> N;
    N *= 3;

    vector<vector<ll>> res = {};

    while(N-- > 0){
        int i;
        cin >> i;
        freq[i]++;
    }

    
    for(auto &[key,value] : freq){
        keys.push_back(key);
    }

    for(ll key : keys){

        ll value = freq[key];
        
        while(value / 3 > 0){
            res.push_back({key,key,key});
            value -= 3;
            
        }

        freq[key] = value;

        if(value == 0) continue;

        if(freq[key+1] >= value && freq[key+2] >= value){

            freq[key] -= value;
            freq[key+1] -= value;
            freq[key+2] -= value;
            res.push_back({key,key+1,key+2});
            if(value == 2) res.push_back({key,key+1,key+2});

        }else{

            cout << "Impossible";
            return 0;
        }
    }

    cout << "Forgiven" << "\n";
    
    for(vector<ll> &r : res){
        cout << r[0] << " " << r[1] << " " << r[2] << "\n";
    }

    return 0;


}
