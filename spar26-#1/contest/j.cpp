#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> names = {};

    int n;

    cin >> n;

    bool fail = false;

    for(int i = 0; i < n; i++){
        int j;
        cin >> j;
        vector<string> name(j);

        for(auto &x : name) cin >> x;

        sort(name.begin(), name.end());
        
        bool found = false;
        
        for(string &na : name){
            if(!names.empty() && na < names[names.size() -1]){
                continue;
            }
            names.push_back(na);
            found = true; 
            break;
        }

        if(!found) fail = true;

    }
    if(fail){
        cout << "impossible";
        return 0;
    }

    string last = names[0];

    for(string name : names){
        cout << name << "\n";
    }

}

