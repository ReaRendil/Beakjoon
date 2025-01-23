#include <bits/stdc++.h>
using namespace std;

void method() {
    string str1, str2;
    cin >> str1 >> str2;
    map<string, int> conditions;

    //map에 저장
    stringstream s(str1);
    string seg;
    while (getline(s, seg, ',')) {
        size_t p = seg.find(':');
        if (p != string::npos) {
            string condition = seg.substr(0, p); 
            int cost = stoi(seg.substr(p + 1)); 
            conditions[condition] = cost; 
        }
    }

    //최소 비용 계산
    stringstream s2(str2);
    string group;
    int MinCost = INT_MAX; 

    while (getline(s2, group, '|')) {
        stringstream subgroup(group);
        string condition;
        int maxCost = 0;

        while (getline(subgroup, condition, '&')) { 
            if (conditions.find(condition) != conditions.end()) {
                maxCost = max(maxCost, conditions[condition]); 
            } else {
                maxCost = INT_MAX; 
                break;
            }
        }

        if (maxCost < INT_MAX) {
            MinCost = min(MinCost, maxCost); 
        }
    }

    cout << MinCost << endl;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        method();
    }
    return 0;
}