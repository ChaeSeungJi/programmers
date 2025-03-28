#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals) {
    vector<int> answer;
    for(vector<int> in : intervals){
        for(int i =in[0]; i<=in[1]; i++){
            answer.push_back(arr[i]);
        }
    }
    return answer;
}