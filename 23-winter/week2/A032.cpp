// BaekJoon
// 2775. 부녀회장이 될테야

#include <iostream>
using namespace std;

int getNum(int a, int b) {
    if (b == 1) {
        return 1;
    }
    if (a == 0) {
        return b;
    }
    return (getNum(a-1, b) + getNum(a, b-1));
}

int main(){
    int T;
    cin >> T;
    
    while (T--) {
        int k, n;
        cin >> k >> n;
        cout << getNum(k, n) << endl;
    }
    
    return 0;
}
