#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    while(!progresses.empty()){
        int &p = progresses[0];
        int &s = speeds[0];
        while(p<100){
            for(int i = 0; i<progresses.size(); i++){        
                progresses[i] += speeds[i];
            }
        }
        int count = 0;
        for(int i = 0; i<progresses.size(); i++){
            if(progresses[i]>=100){
                count++;
            }
            else{
                break;
            }
        }
        progresses.erase(progresses.begin(), progresses.begin()+count);
        speeds.erase(speeds.begin(), speeds.begin()+count);
        answer.push_back(count);
    }
    return answer;
}