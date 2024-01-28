// Programmers
// 나머지가 1이 되는 수 찾기

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    while(1) {
        answer++;
        if (n % answer == 1) break;
    }
    return answer;
}
