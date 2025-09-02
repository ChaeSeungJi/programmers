#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> minq (scoville.begin(), scoville.end());
    while(1){
        int first = minq.top();
        if(first >= K){
            break;
        }
        if(minq.size()==1 && first < K) return -1;
        minq.pop();
        int second = minq.top();
        minq.pop();
        
        int new_scoville = first + (2 * second);
        
        minq.push(new_scoville);
        answer++;
    }
    return answer;
}