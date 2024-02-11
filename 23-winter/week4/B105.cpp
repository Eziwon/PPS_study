// Programmers
// 모의고사

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> one = {1, 2, 3, 4, 5};
vector<int> two = {2, 1, 2, 3, 2, 4, 2, 5};
vector<int> three = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> scores(3);
    for (int i = 0; i < answers.size(); i++) {
        if (answers[i] == one[i%one.size()]) scores[0]++;
        if (answers[i] == two[i%two.size()]) scores[1]++;
        if (answers[i] == three[i%three.size()]) scores[2]++;
    }
    
    int m = *max_element(scores.begin(),scores.end());
    for (int i = 0; i < 3; i++) {
        if (scores[i] == m) answer.push_back(i+1);
    }
    return answer;
}
