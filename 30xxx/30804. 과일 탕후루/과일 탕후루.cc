#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    int FruitTypes[200001];
    for(int i = 0; i < N; i++) {
        cin >> FruitTypes[i];
    }

    unordered_map<int, int> counter; // 과일 종류별 개수 저장
    int left = 0, answer = 0;

    for(int right = 0; right < N; right++) {
        counter[FruitTypes[right]]++; // 오른쪽 포인터 확장

        // 과일 종류가 2개 초과면 왼쪽 포인터 이동
        while(counter.size() > 2) {
            counter[FruitTypes[left]]--;
            if(counter[FruitTypes[left]] == 0) {
                counter.erase(FruitTypes[left]);
            }
            left++;
        }
        // 현재 구간의 최대 길이 갱신
        answer = max(answer, right - left + 1);
    }
    cout << answer;
}