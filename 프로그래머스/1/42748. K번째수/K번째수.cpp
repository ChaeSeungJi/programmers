#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(vector<int> c : commands){
        int i = c[0]-1;
        int j = c[1];
        int k = c[2]-1;
        vector<int> temp(array.begin() + i, array.begin() + j);
        sort(temp.begin(), temp.end());
        answer.push_back(temp[k]);
    }
    
    return answer;
}