#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    bool odd1, odd2;
    odd1 = a%2!=0;
    odd2 = b%2!=0;
    if(odd1 && odd2)
        answer = a*a + b*b;
    else if((!odd1) &&  (!odd2))
        answer = a>b?a-b:b-a;
    else
        answer = 2*(a+b);
    return answer;
}