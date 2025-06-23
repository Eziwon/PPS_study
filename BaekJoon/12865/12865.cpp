#include <iostream>
#include <algorithm>

using namespace std;

int N, K;
int W[101]={0,};
int V[101]={0,};
int DP[101][100001];

int main() {
    cin >> N >> K;
    for (int i = 1; i <= N; i++) {
        cin >> W[i] >> V[i];
    }

    for (int i = 0; i <= K; i++) {
        DP[0][i] = 0;
    }

    for (int i = 1; i <= N; i++) {
        DP[i][0] = 0;

        for (int w = 1; w <= K; w++) {
            if (W[i] > w) {
                DP[i][w] = DP[i-1][w];
            } else {
                DP[i][w] = max(DP[i-1][w], DP[i-1][w - W[i]] + V[i]);
            }
        }
    }

    cout << DP[N][K] << endl;

    return 0;
}