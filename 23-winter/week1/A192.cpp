// BaekJoon
// 문제: 8393. 합

#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += (i + 1);
    }
    
    cout << sum << endl;
    
    return 0;
}
