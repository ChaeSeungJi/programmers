#include <string>
#include <vector>

using namespace std;

int toMinutes(int time) {
    return (time / 100) * 60 + (time % 100);
}

int toTime(int minutes) {
    return (minutes / 60) * 100 + (minutes % 60);
}

int solution(vector<int> schedules, vector<vector<int>> timelogs, int startday) {
    int answer = 0;
    vector<int> counts (schedules.size());
    int days = timelogs[0].size();
    int target = 0;
    for(int i = 0; i<days; i++){
        
        if(startday == 6 || startday ==7) {
            startday++;
            continue;
        }
        if(startday > 7 ) startday = 1;
        
        for(int j = 0; j<timelogs.size(); j++){
            int limit = toMinutes(schedules[j]) + 10;
            if (toMinutes(timelogs[j][i]) <= limit) {
                counts[j]++;
            }            
        }
        startday++;
        target++;
    }
    for(int c : counts){
        if(c == target) answer++;
    }
    
    return answer;
}