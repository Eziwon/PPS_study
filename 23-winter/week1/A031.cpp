// BeakJoon
// 문제: 2163. 초콜릿 자르기

#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    int count = (N - 1) + ((M - 1) * N);
    
    cout << count << endl;
    
    return 0;
}
