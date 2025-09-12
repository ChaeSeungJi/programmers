#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const string &a, const string &b) {
    return a + b > b + a;
}

string solution(vector<int> numbers) {
    vector<string> strNumbers;
    for (int n : numbers) {
        strNumbers.push_back(to_string(n));
    }
    
    sort(strNumbers.begin(), strNumbers.end(), cmp);
    
    string answer = "";
    for (string s : strNumbers) {
        answer += s;
    }
    
    if (answer[0] == '0') return "0";
    
    return answer;
}
