#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;
    vector<int> arr;
    for(int i = 0; i<attendance.size() ;i++){
        if(attendance[i]){
            arr.push_back(rank[i]);
        }
    }
    sort(arr.begin(), arr.end());
    int a,b,c;
    int i = 0;
    for(int r : rank){
        if(r == arr[0])
            a = i;
        else if(r == arr[1])
            b = i;
        else if(r == arr[2])
            c = i;
        i++;
    }
    answer = 10000 * a + 100 * b + c;
    return answer;
}