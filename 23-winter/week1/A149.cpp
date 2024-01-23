// BaekJoon
// 7568. 덩치

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, x, y, count;
    cin >> N;
    
    vector<pair<int, int>> v;
    for(int i = 0; i < N; i++) {
        cin >> x >> y;
        v.push_back(pair<int, int>(x, y));
    }
    
    for(int i = 0; i < N; i++) {
        count = 1;
        for (int j = 0; j < N; j++) {
            if(v[i].first < v[j].first && v[i].second < v[j].second){
                count++;
            }
        }
        cout << count << endl;
    }
    
    return 0;
}
