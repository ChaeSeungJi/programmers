#include <string>
#include <vector>
#include <deque>
using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    // 1. 약수 다 찾기
    // 2. 오름차순 정렬
    // 3. 왼쪽 오른쪽에서 하나씩 빼면서 (가로 - 2) * (세로 - 2) == yellow 개수인지 확인
    // 맞으면 return
    
    int n = brown + yellow;
    deque<int> nums;
    for(int i = 1; i<=n; i++){
        if(n % i == 0) nums.push_back(i);
    }
    
    int half = (nums.size() +1) / 2;
    
    for(int i = 0; i<half; i++){
        int width = nums.back();
        int height = nums.front();
        if((width -2) * (height - 2) == yellow) return {width,height};
        else{
            nums.pop_back();
            nums.pop_front();
        }
    }
    
}