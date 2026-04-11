
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T, S, D, M;
    cin >> T >> S >> D >> M;
    
    vector<vector<int>> prices = {};
    
    int d_temp = D;
    while(d_temp-- > 0){
        vector<int> stocks = {};
        for(int i = 0; i < S; i++){
            int price;
            cin >> price;
            stocks.push_back(price);
        }
        prices.push_back(stocks);
    }

    int res = 0;
    for(int s = 0; s < S; s++){
        for(int d = 0; d < D; d++){
            for(int j = d+1; j < D; j++){

                int amount_can_buy = M / prices[d][s];
                int cost = amount_can_buy * prices[d][s];
                int sell = amount_can_buy * prices[j][s];
                //cout << "s: " << s << "d: " << d << "j: " << j;
                //cout << "Sell: " << sell << "Cost:" << cost << '\n';
                res = max(sell - cost, res);
            }

        }
    }

    cout << (res + M);

    return 0;
}

