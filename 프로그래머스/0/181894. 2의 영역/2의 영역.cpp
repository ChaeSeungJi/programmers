#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    vector<int> two_index;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] ==2){
            two_index.push_back(i);
        }
    }
    if(two_index.size() == 0){
        answer.push_back(-1);
    }
    else if(two_index.size() == 1){
        answer.push_back(2);
    }
    else{
        for(int i = two_index[0]; i<=two_index.back(); i++){
            answer.push_back(arr[i]);
        }
    }
    return answer;
}