#include <string>
#include <vector>

using namespace std;

bool compare(vector<int> a, vector<int> b){
    int n = a.size();
    for(int i = 0; i<n; i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

int solution(vector<int> arr) {
    int answer = 0;
    int n = arr.size();
    vector<int> before = arr;
    vector<int> after (n);
    int count = 0;
    while(1){
        for(int i = 0; i<n; i++){
            if(before[i] >=50 && before[i]%2==0){
                after[i] = before[i] /2;
            }
            else if( before[i] < 50 && before[i]%2 != 0){
                after[i] = before[i] * 2 +1;
            }
            else{
                after[i] = before[i];
            }
        }
        if(compare(before, after)){
            answer = count;
            break;
        }
        count++;
        before = after;
        after = vector<int> (n);
    }
    return answer;
}