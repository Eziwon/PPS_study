// programmers
// 문제: 나누어 떨어지는 숫자 배열
// array의 각 element 중 divisor로 나누어 떨어지는 값을 오름차순으로 정렬한 배열을 반환하는 함수, solution을 작성해주세요.

divisor로 나누어 떨어지는 element가 하나도 없다면 배열에 -1을 담아 반환하세요.
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for (auto n : arr) {
        if ((n % divisor) == 0) {
            answer.push_back(n);
        }
    }
    sort(answer.begin(), answer.end());
    if (answer.empty()) {
        answer.push_back(-1);
    }
    return answer;
}
