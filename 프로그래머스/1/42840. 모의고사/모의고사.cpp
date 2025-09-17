#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> supo1 = {1,2,3,4,5};
    vector<int> supo2 = {2,1,2,3,2,4,2,5};
    vector<int> supo3 = {3,3,1,1,2,2,4,4,5,5};
    
    int count1 = 0, count2 = 0, count3 = 0;
    
    for (int i = 0; i < answers.size(); i++) {
        if (answers[i] == supo1[i % supo1.size()]) count1++;
        if (answers[i] == supo2[i % supo2.size()]) count2++;
        if (answers[i] == supo3[i % supo3.size()]) count3++;
    }
    
    int maxScore = max({count1, count2, count3});
    
    if (count1 == maxScore) answer.push_back(1);
    if (count2 == maxScore) answer.push_back(2);
    if (count3 == maxScore) answer.push_back(3);
    
    return answer;
}
