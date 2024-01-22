// BaekJoon
// 문제: 5355. 화성 수학

#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    double n;
    string s;
    for (int i = 0; i < N; i++) {
        cin >> n;
        getline(cin, s);
        for (auto c : s) {
            if (c == '@') n *= 3;
            if (c == '%') n += 5;
            if (c == '#') n -= 7;
        }
        printf("%.2f\n", n);
    }
    
    return 0;
}
