#include <string>
#include <vector>

using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    vector<vector<string>> arr (30);
    for(string str : strArr){
        int n = str.size() -1;
        arr[n].push_back(str);
    }
    int max = arr[0].size();
    for(int i = 1; i<arr.size(); i++){
        if(max < arr[i].size())
            max = arr[i].size();
    }
    answer = max;
    return answer;
}