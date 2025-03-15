#include <string>
#include <vector>

using namespace std;

int solution(int num, int n) {
    int answer = 0;
    int result = num % n;
    if(result == 0)
        answer = 1;
    else
        answer = 0;
    return answer;
}