#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    vector<int> answer;
    if(arr.size() % 2 == 0){
        for(int i = 1; i<arr.size(); i= i+2){
            arr[i] += n;
        }
    }
    else{
        for(int i = 0; i<arr.size(); i= i+2){
            arr[i] += n;
        }
    }
    answer = arr;
    return answer;
}