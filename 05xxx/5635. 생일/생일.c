#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    char oldestName[16], youngestName[16];
    int oldestDate[3], youngestDate[3];

    // 첫 번째 학생 정보 초기화
    char name[16];
    int day, month, year;
    scanf("%s %d %d %d", name, &day, &month, &year);

    // 초기화
    strcpy(oldestName, name);
    strcpy(youngestName, name);
    oldestDate[0] = youngestDate[0] = day;
    oldestDate[1] = youngestDate[1] = month;
    oldestDate[2] = youngestDate[2] = year;

    // 나머지 학생들 입력
    for (int i = 1; i < N; i++) {
        scanf("%s %d %d %d", name, &day, &month, &year);

        // 나이 많은 사람 찾기 (더 과거 생일일수록 나이 많음)
        if (year < oldestDate[2] || 
           (year == oldestDate[2] && month < oldestDate[1]) || 
           (year == oldestDate[2] && month == oldestDate[1] && day < oldestDate[0])) {
            strcpy(oldestName, name);
            oldestDate[0] = day;
            oldestDate[1] = month;
            oldestDate[2] = year;
        }

        // 나이 적은 사람 찾기 (더 최근 생일일수록 나이 적음)
        if (year > youngestDate[2] || 
           (year == youngestDate[2] && month > youngestDate[1]) || 
           (year == youngestDate[2] && month == youngestDate[1] && day > youngestDate[0])) {
            strcpy(youngestName, name);
            youngestDate[0] = day;
            youngestDate[1] = month;
            youngestDate[2] = year;
        }
    }

    // 결과 출력
    printf("%s\n%s\n", youngestName, oldestName);

    return 0;
}
