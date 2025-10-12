#include <string>
#include <vector>
using namespace std;

bool canSpeak(const string &w, int idx, const vector<string> &word, string prev) {
    if (idx == w.size()) return true;

    for (auto &wd : word) {
        if (wd == prev) continue;  // 같은 단어 연속 사용 금지
        if (w.substr(idx, wd.size()) == wd) {
            if (canSpeak(w, idx + wd.size(), word, wd)) return true;
        }
    }
    return false;
}

int solution(vector<string> babbling) {
    vector<string> word = {"aya", "ye", "woo", "ma"};
    int answer = 0;

    for (auto &w : babbling) {
        if (canSpeak(w, 0, word, "")) answer++;
    }
    return answer;
}
