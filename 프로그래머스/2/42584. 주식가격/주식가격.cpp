#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    for (int i = 0; i < prices.size(); i++) {
        int curr = prices[i];
        int term = 0;
        if (i == (prices.size() - 1)) {
            answer.push_back(0);
            break;
        }
        for (int j = i+1; j < prices.size(); j++) {
            if (curr <= prices[j]) {
                term++;
            }
            else {
                term++;
                break;
            }
        }
        answer.push_back(term);
    }
    return answer;
}