#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int T[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &T[i]);
    }

    // 슬라이딩 윈도우 초기 구간 합 계산
    long long current_sum = 0;
    for (int i = 0; i < m; i++) {
        current_sum += T[i];
    }

    long long max_sum = current_sum;

    // 슬라이딩 윈도우를 이용해 최대 구간 합 찾기
    for (int i = m; i < n; i++) {
        current_sum += T[i] - T[i - m];
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    printf("%lld\n", max_sum);
    return 0;
}
