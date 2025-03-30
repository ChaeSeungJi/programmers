#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int n) {
    int answer = 0;
    for(int v : numbers){
        if(answer > n)
            break;
        answer += v;
    }
    return answer;
}