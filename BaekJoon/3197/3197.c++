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
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int R, C;
vector<string> lake;
queue<pair<int, int> > waterQ, nextWaterQ;
queue<pair<int, int> > swanQ, nextSwanQ;
bool visited[1500][1500];
pair<int, int> swans[2];

int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0, 0, -1, 1};

bool canMeet() {
    while(!swanQ.empty()) {
        int y = swanQ.front().first;
        int x = swanQ.front().second;
        swanQ.pop();

        for (int d = 0; d < 4; ++d) {
            int ny = y + dy[d];
            int nx = x + dx[d];

            if (ny < 0 || ny >= R || nx < 0 || nx >= C) continue;
            if (visited[ny][nx]) continue;

            visited[ny][nx] = true;
            if(lake[ny][nx] == '.') {
                swanQ.push(make_pair(ny, nx));
            } else if (lake[ny][nx] == 'X') {
                nextSwanQ.push(make_pair(ny, nx));
            } else if (lake[ny][nx] == 'L') {
                return true;
            }
        }
    }

    return false;
}

void meltIce() {
    while (!waterQ.empty()) {
        int y = waterQ.front().first;
        int x = waterQ.front().second;
        waterQ.pop();

        for (int d = 0; d < 4; ++d) {
            int ny = y + dy[d];
            int nx = x + dx[d];

            if (ny < 0 || ny >= R || nx < 0 || nx >= C) continue;;

            if (lake[ny][nx] == 'X') {
                lake[ny][nx] = '.';
                nextWaterQ.push(make_pair(ny, nx));
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> R >> C;
    lake.resize(R);

    int swanCount = 0;

    for (int i = 0; i < R; i++) {
        cin >> lake[i];
        for (int j = 0; j < C; j++) {
            if (lake[i][j] == 'L') {
                if (swanCount == 0) {
                    swans[0] = make_pair(i, j);
                } else {
                    swans[1] = make_pair(i, j);
                }
                lake[i][j] = '.';
                swanCount++;
            }

            if (lake[i][j] == '.') {
                waterQ.push(make_pair(i, j));
            }
        }
    }
    
    swanQ.push(swans[0]);
    visited[swans[0].first][swans[0].second] = true;

    int days = 0;
    while(true) {
        if (canMeet()) break;
        meltIce();

        swanQ = nextSwanQ;
        waterQ = nextWaterQ;

        while(!nextSwanQ.empty()) nextSwanQ.pop();
        while(!nextWaterQ.empty()) nextWaterQ.pop();

        days++;
    }

    cout << days << '\n';

    return 0;
}