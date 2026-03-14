#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    long long d, a, o, da, doo;

    cin >> d;
    cin >> a >> o;
    cin >> da >> doo;

    long long new_a = max(0LL, a - (da * d));
    long long new_o = max(0LL, o - (doo * d));

    long double ratio = (long double)new_a / (new_o + new_a);

    cout << fixed << setprecision(8) << ratio * 100;

    return 0;


}
