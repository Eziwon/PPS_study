// 최소공배수

#include <iostream>
using namespace std;

int calc(int x, int y){
    if (x % y == 0) {
        return y;
    } else {
        return calc(y, x % y);
    }
}

int main(){
    int T, A, B;
    cin >> T;
    
    for(int i = 0; i < T; i++) {
        cin >> A >> B;
        if (A >= B) {
            cout << A * B / calc(A, B) << endl;
        } else {
            cout << A * B / calc(B, A) << endl;
        }
    }
    return 0;
}