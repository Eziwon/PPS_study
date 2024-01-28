// Programmers
// 없는 숫자 더하기

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    for (int i = 1; i < 10; i ++) {
        answer += i;
    }
    
    for (int i = 0; i < numbers.size(); i++) {
        answer -= numbers[i];
    }
    
    return answer;
}
