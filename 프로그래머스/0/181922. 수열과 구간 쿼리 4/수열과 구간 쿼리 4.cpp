#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for(vector<int> q: queries){
        int s,e,k;
        s = q[0];
        e = q[1];
        k = q[2];
        for(int i = s; i<=e; i++){
            if(i % k == 0)
                arr[i] +=1;
        }
    }
    answer = arr;
    return answer;
}