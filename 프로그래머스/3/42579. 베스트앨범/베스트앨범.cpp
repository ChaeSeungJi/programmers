#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    unordered_map<string, long long> total;                 // 장르 총 재생수
    unordered_map<string, vector<int>> by_genre;            // 장르별 곡 인덱스 목록

    int n = genres.size();
    for (int i = 0; i < n; ++i) {
        total[genres[i]] += plays[i];
        by_genre[genres[i]].push_back(i);
    }

    // 장르 정렬: 총 재생수 내림차순 (문제에서 장르 총재생수는 서로 다르다고 했음)
    vector<string> order;
    order.reserve(total.size());
    for (auto &kv : total) order.push_back(kv.first);
    sort(order.begin(), order.end(), [&](const string& a, const string& b){
        return total[a] > total[b];
    });

    vector<int> answer;
    for (const string& g : order) {
        auto &idxs = by_genre[g];
        // 장르 내 정렬: 재생수 내림차순, 동률이면 id 오름차순
        sort(idxs.begin(), idxs.end(), [&](int a, int b){
            if (plays[a] != plays[b]) return plays[a] > plays[b];
            return a < b;
        });
        // 최대 2개 수록
        answer.push_back(idxs[0]);
        if (idxs.size() >= 2) answer.push_back(idxs[1]);
    }

    return answer;
}
