#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

struct Task {
    int index;
    int request_time; 
    int term;         
};

struct Compare {
    bool operator()(const Task& a, const Task& b) const {
        if (a.term != b.term) return a.term > b.term;                 
        if (a.request_time != b.request_time) return a.request_time > b.request_time; 
        return a.index > b.index;                                     
    }
};

int solution(vector<vector<int>> jobs) {
    const int n = (int)jobs.size();

    vector<Task> tasks;
    tasks.reserve(n);
    for (int i = 0; i < n; ++i) {
        tasks.push_back({ i, jobs[i][0], jobs[i][1] });
    }

    sort(tasks.begin(), tasks.end(),
         [](const Task& a, const Task& b) {
             if (a.request_time != b.request_time) return a.request_time < b.request_time;
             if (a.term != b.term) return a.term < b.term;
             return a.index < b.index;
         });

    priority_queue<Task, vector<Task>, Compare> pq;
    long long time = 0;       
    long long total = 0;      
    int i = 0;                
    int done = 0;             

    while (done < n) {
        while (i < n && tasks[i].request_time <= time) {
            pq.push(tasks[i]);
            ++i;
        }

        if (!pq.empty()) {
            Task cur = pq.top(); pq.pop();
            time += cur.term;                       
            total += (time - cur.request_time);     
            ++done;
        } else {
            time = max<long long>(time, tasks[i].request_time);
        }
    }

    return (int)(total / n); 
}
