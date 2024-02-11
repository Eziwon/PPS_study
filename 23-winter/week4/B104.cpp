// BaekJoon
// 10815. 숫자 카드

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M, num;
    
    cin >> N;
    vector<int> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i];   
    }
    sort(v.begin(), v.end());
    
    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> num;
        cout << binary_search(v.begin(), v.end(), num) << ' ';
    }
    
    return 0;
}
