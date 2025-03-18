#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    int a1, a2;
    
    a1 = stoi(to_string(a) + to_string(b));
    a2 = 2 * a * b;
    answer = a1 > a2 ? a1 : a2;
    
    return answer;
}