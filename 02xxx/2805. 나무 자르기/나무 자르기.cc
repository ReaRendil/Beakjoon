#include <bits/stdc++.h>
using namespace std;

long long sumTree(long arr[], long length, long n) {
    long long sum = 0;
    for (int i = 0; i < length; i++) {
        if (arr[i] > n) {
            sum += (arr[i] - n);
        }
    }
    return sum;
}

void quest(long arr[], long left, long right, long n, long length) {
    long result = 0;
    while (left <= right) {
        long mid = (left + right) / 2;
        long long sumT = sumTree(arr, length, mid);

        if (sumT >= n) {
            result = mid;  // 가능한 경우 값을 저장하고 더 큰 값 탐색
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    cout << result;  // 최적의 절단 높이 출력
}

void mainCode() {
    long N, M, max;
    cin >> N >> M >> max;
    long arr[N];
    arr[0] = max;
    
    for (int i = 1; i < N; i++) {
        cin >> arr[i];
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    quest(arr, 0, max, M, N);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    mainCode();
}
