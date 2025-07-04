// 두 마리의 백조가 호수에서 살고 있었다. 
// 그렇지만 두 마리는 호수를 덮고 있는 빙판으로 만나지 못한다.

// 호수는 행이 R개, 열이 C개인 직사각형 모양이다. 
// 어떤 칸은 얼음으로 덮여있다.

// 호수는 차례로 녹는데, 매일 물 공간과 접촉한 모든 빙판 공간은 녹는다. 
// 두 개의 공간이 접촉하려면 가로나 세로로 닿아 있는 것만 (대각선은 고려하지 않는다) 생각한다.

// 백조는 오직 물 공간에서 세로나 가로로만(대각선은 제외한다) 움직일 수 있다.

// 며칠이 지나야 백조들이 만날 수 있는 지 계산하는 프로그램을 작성하시오.

// 입력의 첫째 줄에는 R과 C가 주어진다. 단, 1 ≤ R, C ≤ 1500.

// 다음 R개의 줄에는 각각 길이 C의 문자열이 하나씩 주어진다. 
// '.'은 물 공간, 'X'는 빙판 공간, 'L'은 백조가 있는 공간으로 나타낸다

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define MAX 1500

bool isFind;
int R, C;
vector<string> MAP;

queue<pair<int, int>> waterQ, waterNQ;
queue<pair<int, int>> swanQ, swanNQ;
pair<int, int> swans[2];
bool Visit[MAX][MAX];

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

bool swanBFS() {
    while (!swanQ.empty()) {
        int x = swanQ.front().first;
        int y = swanQ.front().second;
        swanQ.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || ny < 0 || nx >= R || ny >= C) continue;
            if (Visit[nx][ny]) continue;

            Visit[nx][ny] = true;
            if (MAP[nx][ny] == '.') {   // 주변이 물인 경우
                swanQ.push(make_pair(nx, ny));
            } else if (MAP[nx][ny] == 'X') {    // 주변이 얼음인 경우 -> 다음 날에 녹음
                swanNQ.push(make_pair(nx, ny));
            } else if (MAP[nx][ny] == 'L') {    // 주변에 백조가 있는 경우 -> 백조를 찾음!
                return true;
            }
        }
    }

    return false;
}

void waterBFS() {
    while (!waterQ.empty()) {
        int x = waterQ.front().first;
        int y = waterQ.front().second;
        waterQ.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && ny >= 0 && nx < R && ny < C) {
                if (MAP[nx][ny] == 'X') {   // 물 주변이 얼음인 경우 -> 녹임
                    MAP[nx][ny] = '.';
                    waterNQ.push(make_pair(nx, ny));
                }
            }
        }
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    isFind = false;
    cin >> R >> C;

    MAP.resize(R);
    int swanCount = 0;

    // 호수 정보 입력받기
    for (int i = 0; i < R; i++) {
        cin >> MAP[i];
        for (int j = 0; j < C; j++) {
            if (MAP[i][j] != 'X') waterQ.push(make_pair(i, j)); // 얼음이 아닌 경우 (물 or 백조)
            if (MAP[i][j] == 'L') { // 백조인 경우
                if (swanCount == 0) {
                    swans[0].first = i;
                    swans[0].second = j;
                } else {
                    swans[1].first = i;
                    swans[1].second = j;
                }
                swanCount++;
            }
        }
    }

    swanQ.push(swans[0]);
    Visit[swans[0].first][swans[0].second] = true;

    int days = 0;

    while (true) {
        if (swanBFS()) break;   // 백조 이동해보기

        waterBFS();     // 얼음 녹이기
        waterQ = waterNQ;
        swanQ = swanNQ;

        while (!waterNQ.empty()) waterNQ.pop();
        while (!swanNQ.empty()) swanNQ.pop();
        days++; // 하루가 지남
    }

    cout << days << '\n';

    return 0;
}