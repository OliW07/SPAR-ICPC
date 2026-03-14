#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b ,c;

    cin >> a >> b >> c;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    reverse(c.begin(), c.end());

    while(a.size() >= 0 || b.size() >= 0 || c.size() >= 0){
        
        if(a.empty()){
            cout << b;
            return 0;
        }else if(b.empty()){
            cout << c;
            return 0;
        }else if(c.empty()){
            cout << a;
            return 0;
        }
        
        if(a[a.size() -1] == b[b.size()-1]){
            cout << a[a.size() -1];
            a.pop_back();
            b.pop_back();
        }else if(a[a.size()-1] == c[c.size()-1]){
            cout << a[a.size() -1];
            a.pop_back();
            c.pop_back();
        }else if(b[b.size()-1] == c[c.size()-1]){
            cout << b[b.size()-1];
            b.pop_back();
            c.pop_back();
        }
    }

    return 0;

}