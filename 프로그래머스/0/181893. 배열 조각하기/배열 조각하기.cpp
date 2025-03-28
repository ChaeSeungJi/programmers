#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    for (int i = 0; i < query.size(); i++) {
        int idx = query[i];
        if (idx < 0 || idx >= arr.size()) {
            // 잘못된 인덱스면 그냥 무시하거나 예외 처리
            continue;
        }

        if (i % 2 == 0) {
            // 짝수 인덱스: idx 이후 자르기 (포함)
            arr = vector<int>(arr.begin(), arr.begin() + idx + 1);
        } else {
            // 홀수 인덱스: idx 이전 자르기 (제외)
            arr = vector<int>(arr.begin() + idx, arr.end());
        }
    }
    return arr;
}