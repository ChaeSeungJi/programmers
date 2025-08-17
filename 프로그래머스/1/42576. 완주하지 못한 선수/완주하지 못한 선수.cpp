#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string, int> cnt;
    for(string name : participant) cnt[name]++;
    for(string name : completion) cnt[name]--;
    
    for (const auto& [name, c] : cnt) {
        if (c > 0) return name;
    }
    return answer;
}