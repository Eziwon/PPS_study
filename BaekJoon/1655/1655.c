// 백준이는 동생에게 "가운데를 말해요" 게임을 가르쳐주고 있다. 
// 백준이가 정수를 하나씩 외칠때마다 동생은 지금까지 백준이가 말한 수 중에서 중간값을 말해야 한다. 
// 만약, 그동안 백준이가 외친 수의 개수가 짝수개라면 중간에 있는 두 수 중에서 작은 수를 말해야 한다.
// 예를 들어 백준이가 동생에게 1, 5, 2, 10, -99, 7, 5를 순서대로 외쳤다고 하면, 
// 동생은 1, 1, 2, 2, 2, 2, 5를 차례대로 말해야 한다. 
// 백준이가 외치는 수가 주어졌을 때, 동생이 말해야 하는 수를 구하는 프로그램을 작성하시오.

// 첫째 줄에는 백준이가 외치는 정수의 개수 N이 주어진다. 
// N은 1보다 크거나 같고, 100,000보다 작거나 같은 자연수이다. 
// 그 다음 N줄에 걸쳐서 백준이가 외치는 정수가 차례대로 주어진다. 
// 정수는 -10,000보다 크거나 같고, 10,000보다 작거나 같다.

#include <stdio.h>

#define MAX_N 100000

int maxHeap[MAX_N];
int minHeap[MAX_N];

int maxSize = 0;
int minSize = 0;

void pushMax(int n);
void pushMin(int n);
int topMax();
int topMin();
int popMax();
int popMin();

int main() {
    int N;
    scanf("%d", &N);

    while(N--) {
        int a;
        scanf("%d", &a);

        if (maxSize == minSize) {
            pushMax(a);
        } else {
            pushMin(a);
        }

        if (maxSize > 0 && minSize > 0 && topMax() > topMin()) {
            int maxVal = popMax();
            int minVal = popMin();
            pushMax(minVal);
            pushMin(maxVal);
        }

        printf("%d\n", topMax());
        
    }

    return 0;
}

void pushMax(int n) {
    int i = maxSize++;

    while (i > 0) {
        int p = (i - 1) / 2;    // 부모 인덱스
        if (maxHeap[p] >= n) break; // 부모가 더 커지면 멈춤
        maxHeap[i] = maxHeap[p];    // 부모 값을 아래로 내림
        i = p;  // 위로 올라감
    }

    maxHeap[i] = n;
}

void pushMin(int n) {
    int i = minSize++;

    while (i > 0) {
        int p = (i - 1) / 2;
        if (minHeap[p] <= n) break;
        minHeap[i] = minHeap[p];
        i = p; 
    }

    minHeap[i] = n;
}

int topMax() {
    return maxHeap[0];
}

int topMin() {
    return minHeap[0];
}

int popMax() {
    int ret = maxHeap[0];
    int last = maxHeap[--maxSize];
    int i = 0;

    while (i*2 + 1 < maxSize) {
        int l = i*2 + 1;
        int r = i*2 + 2;
        int child = (r < maxSize && maxHeap[r] > maxHeap[l]) ? r : l;

        if (last >= maxHeap[child]) break;
        maxHeap[i] = maxHeap[child];
        i = child;
    }

    maxHeap[i] = last;

    return ret;
}

int popMin() {
    int ret = minHeap[0];
    int last = minHeap[--minSize];
    int i = 0;

    while (i*2 + 1 < minSize) {
        int l = i*2 + 1;
        int r = i*2 + 2;
        int child = (r < minSize && minHeap[r] < minHeap[l]) ? r : l;

        if (last <= minHeap[child]) break;
        minHeap[i] = minHeap[child];
        i = child;
    }

    minHeap[i] = last;

    return ret;
}