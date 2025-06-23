// 준서가 여행에 필요하다고 생각하는 N개의 물건이 있다. 
// 각 물건은 무게 W와 가치 V를 가지는데, 
// 해당 물건을 배낭에 넣어서 가면 준서가 V만큼 즐길 수 있다. 
// 아직 행군을 해본 적이 없는 준서는 최대 K만큼의 무게만을 넣을 수 있는 배낭만 들고 다닐 수 있다. 
// 준서가 최대한 즐거운 여행을 하기 위해 배낭에 넣을 수 있는 물건들의 가치의 최댓값을 알려주자.

// 첫 줄에 물품의 수 N(1 ≤ N ≤ 100)과 
// 준서가 버틸 수 있는 무게 K(1 ≤ K ≤ 100,000)가 주어진다. 
// 두 번째 줄부터 N개의 줄에 거쳐 각 물건의 무게 W(1 ≤ W ≤ 100,000)와 
// 해당 물건의 가치 V(0 ≤ V ≤ 1,000)가 주어진다.

#include <stdio.h>

int max(int a, int b);

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    int weights[N];
    int values[N];

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &weights[i], &values[i]);
    }

    int dp[N+1][K+1];
    for (int i = 0; i < N+1; i++) {
        dp[i][0] = 0;
    }
    for (int i = 1; i < K+1; i++) {
        dp[0][i] = 0;
    }

    for (int i = 1; i < N+1; i++) {
        for (int w = 1; w < K+1; w++) {
            if (weights[i-1] > w) {
                dp[i][w] = dp[i-1][w];
            } else {
                dp[i][w] = max(dp[i-1][w], dp[i-1][w-weights[i-1]] + values[i-1]);
            }
        }
    }

    printf("%d\n", dp[N][K]);
    
    return 0;
}

int max(int a, int b) {
    return (a > b) ? a : b;
}