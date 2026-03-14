#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, l , h;
    cin >> n >> l >> h;

    vector<int> notes(n);
    for(auto &x : notes) cin >> x;

    size_t smallest = 200;
    size_t length = -1;
    size_t cur = 0;
    size_t octaves = 0;

    for(size_t i = 0; i < notes.size(); i++){
        size_t pitch = notes[i] + 12 * octaves;
        while(pitch < l){
            cur = i;
            octaves++;
            pitch = notes[i] + 12 * octaves;
            
        }
        while(pitch > h){
            cur = i;
            octaves--;
            pitch = notes[i] + 12 * octaves;
            
        }
        size_t interval = *max_element(notes.begin()+cur , notes.begin()+i) - *min_element(notes.begin()+cur, notes.begin()+i);
        if(smallest > interval && i != cur){
            smallest = *min_element(notes.begin()+cur, notes.begin()+i);

            length = i - cur + 1;

        }else if(smallest == interval && i != cur){

            length = max(length, i - cur + 1);
        }
    }

    cout << length;
    return 0;
}
