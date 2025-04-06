#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int n = 1;
    while(1){
        if(n < arr.size()){
            n = n << 1;
        }
        else{
            for(int i = arr.size(); i<n; i++){
                arr.push_back(0);
                
            }
            break;
        }
    }
    answer = arr;
    return answer;
}