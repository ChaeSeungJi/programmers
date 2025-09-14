#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int a, int b){
    return a > b;
}

int solution(vector<int> citations) {
    int answer = 0;
    sort(citations.begin(), citations.end(), cmp);
    
    for(int h = 0; h<citations.size(); h++) {
        if(citations[h] >= h + 1) answer++;
        else break;
    }

    return answer;
}