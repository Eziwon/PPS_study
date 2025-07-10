from collections import deque
import sys

input = sys.stdin.readline

R, C = map(int, input().split())
MAP = []
swans = []

for i in range(R):
    row = list(input().strip())
    for j in range(C):
        if row[j] is 'L':
            swans.append((i, j))
            row[j] = '.'
    MAP.append(row)

flood = [[-1]*C for _ in range(R)]
waterQ = deque()

for i in range(R):
    for j in range(C):
        if MAP[i][j]is '.':
            flood[i][j] = 0
            waterQ.append((i, j))

dx = [0, 0, 1, -1]
dy = [1, -1, 0, 0]

while waterQ:
    x, y = waterQ.popleft()

    for d in range(4):
        nx, ny = x + dx[d], y + dy[d]

        if 0 <= nx < R and 0 <= ny < C and flood[nx][ny] == -1:
            if MAP[nx][ny] is 'X':
                flood[nx][ny] = flood[x][y] + 1
                waterQ.append((nx, ny))

def canMeet(day):
    visited = [[False]*C for _ in range(R)]
    q = deque()
    sx, sy = swans[0]
    ex, ey = swans[1]
    q.append((sx, sy))
    
