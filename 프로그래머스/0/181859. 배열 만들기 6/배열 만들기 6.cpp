#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int n = -1;

    for(int i = 0; i<arr.size(); i++){
        if(n == -1){
            answer.push_back(arr[i]);
            n++;
            continue;
        }
            
        if(arr[i] == answer[n] && n != -1 ){
            answer.pop_back();
            n--;
            continue;
        }
        else if(arr[i] != answer[n] && n != -1 ){
            answer.push_back(arr[i]);
            n++;
            continue;
        }
    }
    if(n == -1)
        return vector<int> (1,-1);
    return answer;
}