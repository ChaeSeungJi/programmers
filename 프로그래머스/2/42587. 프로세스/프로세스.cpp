#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    queue<pair<int,int>> q;     // {priority, index}
    priority_queue<int> pq;     // 남은 문서 우선순위들 (최대 힙)

    for (int i = 0; i < (int)priorities.size(); ++i) {
        q.push({priorities[i], i});
        pq.push(priorities[i]);
    }

    int answer = 0;
    while (!q.empty()) {
        auto [p, idx] = q.front(); q.pop();

        if (p < pq.top()) {
            q.push({p, idx});
        } else {
            pq.pop();
            ++answer;
            if (idx == location) return answer;
        }
    }
    return answer; 
}
