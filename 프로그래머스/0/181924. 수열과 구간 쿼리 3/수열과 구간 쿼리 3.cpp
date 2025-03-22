#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for(vector<int> location : queries){
        int temp = arr[location[0]];
        arr[location[0]] = arr[location[1]];
        arr[location[1]] = temp;
    }
    answer = arr;
    return answer;
}