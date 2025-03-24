#include <string>
#include <vector>

using namespace std;

bool solution(bool x1, bool x2, bool x3, bool x4) {
    bool answer = true;
    bool r1 = x1 || x2;
    bool r2 = x3 || x4;
    answer = r1 && r2;
    return answer;
}