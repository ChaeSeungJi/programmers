#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int time = 1;
    queue<pair<int,int>> q; // truck_weight, time
    for(int t : truck_weights){
        q.push({t,0});
    }
    
    int now_weight = 0;
    vector<pair<int,int>> now_q; // truck_weight, time
    int end_count = 0;
    while(end_count != truck_weights.size()){
        if(!q.empty()){
            pair<int,int> p = q.front();

            if((weight - now_weight) >= p.first){
                now_weight += p.first;
                now_q.push_back(p);
                q.pop();
            }
        }
        int need_delete = 0;
        for(int i=0; i< now_q.size(); i++){
            auto& pr = now_q[i];
            pr.second++;
            if(pr.second==bridge_length){
                end_count++;
                need_delete = 1;
                now_weight -= pr.first;
            }
        }
        
        if(need_delete)
            now_q.erase(now_q.begin());
        time++;
    }
    
    return time;
}