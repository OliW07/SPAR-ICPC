#include <bits/stdc++.h>
using namespace std;

int main(){

    int N;
    cin >> N;

    int X, Y, Z;
    cin >> X >> Y >> Z;

    if((X == Y && X == Z && Y == Z) ||
        max({X,Y,Z}) - min({X,Y,Z}) == 2){

        cout << "Forgiven\n";
        cout << X << " " << Y << " " << Z;
    }

    else {
        cout << "Impossible\n";
    }

    return 0;
}
