// BaekJoon
// 문제: 2953. 나는 요리사다

#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int mem = 5;
    const int eval = 4;
    
    int winner_score = 0;
    int winner_i = 0;
    
    for (int i=0; i<mem; i++) {
        int score = 0;
        for (int j=0; j<eval; j++) {
            int s;
            cin >> s;
            score += s;
        }
        if (score > winner_score) {
            winner_score = score;
            winner_i = i;
        }
    }
    
    cout << winner_i + 1 << " " << winner_score << endl;
    
    return 0;
}
