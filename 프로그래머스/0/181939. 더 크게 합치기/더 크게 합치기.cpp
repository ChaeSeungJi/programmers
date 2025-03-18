#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string stra = to_string(a);
    string strb = to_string(b);
    string strAnswer1 = stra + strb;
    string strAnswer2 = strb + stra;
    int a1, a2;
    a1 = stoi(strAnswer1);
    a2 = stoi(strAnswer2);
    answer = a1 > a2 ? a1 : a2;
    return answer;
}