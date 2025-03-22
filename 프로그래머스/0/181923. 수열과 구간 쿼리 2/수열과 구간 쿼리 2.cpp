#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for(vector<int> q : queries){
        int s,e,k;
        s = q[0];
        e = q[1];
        k = q[2];
        int min = 1000001;
        for(int i = s; i<=e; i++){
            if( arr[i] > k &&  arr[i] < min){
                min = arr[i];
            }
        }
        if(min == 1000001)
            answer.push_back(-1);
        else
            answer.push_back(min);
    }
    return answer;
}