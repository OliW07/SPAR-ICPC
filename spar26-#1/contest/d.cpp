#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string word;
    map<char,int> letters{};

    cin >> word;

    for(const char &c : word){

        if(letters[c] != 0) letters[c] = 0;
        else letters[c] = 1;

    }

    int total = 0;

    for(auto &[c, count] : letters){
        total += count;
    }


    if(word.size() % 2 == 0 && total == 0){
        cout << "yes";
    }else if(word.size() % 2 != 0 && total == 1){
        cout << "yes";
    }else{
        cout << "no";
    }

    return 0;
}