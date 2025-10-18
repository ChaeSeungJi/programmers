#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int sum = 0;
    for(int i = 1; i<num; i++){
        sum += i;
    }
    int a = (total - sum ) / num;
    for(int i = 0; i<num; i++){
        answer.push_back(a);
        a++;
    }
    return answer;
}