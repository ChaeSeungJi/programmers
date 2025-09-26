#include <string>
#include <vector>

using namespace std;

void dfs(vector<int>& numbers, int idx, int sum, int target, int& answer){
    if(idx == numbers.size()){
        if(sum == target) answer++;
        return;
    }
    
    dfs(numbers, idx + 1, sum + numbers[idx], target, answer);
    
    dfs(numbers, idx + 1, sum - numbers[idx], target, answer);
}

int solution(vector<int> numbers, int target) {
    int answer = 0;
    dfs(numbers, 0, 0, target, answer);
    return answer;
}