// BaekJoon
// 문제: 1026. 보물

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    vector<int> A(N);
    vector<int> B(N);
    for (int i=0; i<N; i++) {
        cin >> A[i];
    }
    for (int i=0; i<N; i++) {
        cin >> B[i];
    }    
    
    sort(A.begin(), A.end());
    sort(B.rbegin(), B.rend());
    
    int result = 0;
    for (int i=0; i<N; i++) {
        result += A[i] * B[i];
    }
    
    cout << result << endl;
    
    return 0;
}
