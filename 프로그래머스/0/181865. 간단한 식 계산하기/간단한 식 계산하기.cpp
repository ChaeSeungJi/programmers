#include <string>
#include <vector>
#include <sstream>
using namespace std;


int solution(string binomial) {
    int answer = 0;
    istringstream iss(binomial);
    int a, b;
    char op;
    
    iss >> a >> op >> b;  // a, op, b 순으로 파싱
    
    switch(op) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        default:
            return 0;
    }
    return answer;
}