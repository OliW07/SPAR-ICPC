#include <bits/stdc++.h>

using namespace std;

pair<int, int> get_lr(const vector<double> &bits){
    int l = 0, r = 0;
    double ev = -9999.0;


    for(int i = 0; i < bits.size(); i++){
        for(int j = i + 1; j < bits.size(); j++){

            double new_ev = accumulate(bits.begin() + i, bits.begin()+j+1, 0.0);
            if(new_ev > ev){
                ev = new_ev;
                l = i;
                r = j;
                
            }
        }
    }

    return {l,r};
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int p = 0;
    int n;
    cin >> n;

    vector<double> bits(n, 0.5);

    while(p < 70){
        
        auto [l,r] = get_lr(bits);
        cout << l+1 << " " << r+1 << endl;

        for(double &x : bits) cin >> x;
        for(double &x : bits) x = (x-0.5) * -1;

        cin >> p;
    }

    return 0;

}
