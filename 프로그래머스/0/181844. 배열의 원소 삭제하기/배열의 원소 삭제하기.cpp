#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> answer;
    
    for(int i : delete_list){
        arr.erase(remove(arr.begin(), arr.end(), i), arr.end());    
    }
    answer = arr;
    return answer;
}