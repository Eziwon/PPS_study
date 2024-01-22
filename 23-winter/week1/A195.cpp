// BaekJoon
// 문제: 2438. 별 찍기 - 1

#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i+1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}
