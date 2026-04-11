
#include <bits/stdc++.h>
using namespace std;


inline bool is_conseq(int x, int y, int z){
    if(x > y) swap(x,y);
    if(y > z) swap(y,z);
    if(x > y) swap(x,y);
    return x+1 == y && y+1 == z;
}

bool is_valid(vector<int> &nums){
    for(int i = 0; i < nums.size(); i += 3){
        if(!(nums[i] == nums[i+1] && nums[i] == nums[i+2]) &&
            !is_conseq(nums[i], nums[i+1], nums[i+2])){

            return false;
        }
    }

    return true;
}

int main(){

    int N;
    cin >> N;
    N *= 3;

    vector<int> nums = {};

    while(N-- > 0){
        int i;
        cin >> i;
        nums.push_back(i);
    }

    sort(nums.begin(), nums.end());

    do {

        if(is_valid(nums)){
            cout << "Forgiven\n";
            for(int i = 0; i < nums.size(); i++){
                cout << nums[i];
                if((i+1) % 3 == 0){
                    cout << "\n";
                }else{
                    cout << " ";
                }
            }
            return 0;
        }

    } while (next_permutation(nums.begin(), nums.end()));

    cout << "Impossible";
    return 0;
}
