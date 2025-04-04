#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    int count = 0;
    for(int i = 0; i<arr.size(); i++){
        if(count == k)
            break;
        auto index = find(answer.begin(), answer.end(), arr[i]);
        if(index == answer.end()){
            count++;
            answer.push_back(arr[i]);
        }

    }
    if(count < k){
        for(int i = 0; i< k - count ; i++){
            answer.push_back(-1);
        }
    }
    return answer;
}