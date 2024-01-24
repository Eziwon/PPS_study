// BaekJoon
// 17211. 좋은 날 싫은 날

#include <iostream>
using namespace std;

int main(){
    int N, f;
    cin >> N >> f;
    
    double p[4];
    for (int i = 0; i < 4; i++) {
        cin >> p[i];
    }
    
    double good, bad;
    if (f == 0) {
        good = p[0];
        bad = p[1];
    } else {
        good = p[2];
        bad = p[3];
    }
    
    double temp_g, temp_b;
    for (int i = 1; i < N; i++) {
        temp_g = (good * p[0]) + (bad * p[2]);
        temp_b = (good * p[1]) + (bad * p[3]);
        good = temp_g;
        bad = temp_b;
    }
    
    cout << (int)(good * 1000) << endl;
    cout << (int)(bad * 1000) << endl;
    
    return 0;
}
