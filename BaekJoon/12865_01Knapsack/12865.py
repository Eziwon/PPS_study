import sys

N, K = map(int, input().split())
bag = [list(map(int, input().split())) for _ in range(N)]
dp = [[0]*(K+1) for _ in range(N+1)]

for i in range(1, N+1):
    for w in range(1, K+1):
        if bag[i-1][0] > w:
            dp[i][w] = dp[i-1][w]
        else:
            dp[i][w] = max(dp[i-1][w-bag[i-1][0]]+bag[i-1][1], dp[i-1][w])

print(dp[N][K])