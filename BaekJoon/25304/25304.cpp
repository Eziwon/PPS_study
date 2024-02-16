영수증

#include <iostream>
using namespace std;

int main(){
    int X, N, a, b;
    cin >> X >> N;
    int ans = 0;
    for (int i = 0; i < N; i++) {
        cin >> a >> b;
        ans += a * b;
    }
    
    if (ans == X) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}
