#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    int before = numLog[0];
    int curr;
    
    for(int i = 1; i<numLog.size(); i++){
        curr = numLog[i];
        int log = curr - before;
        switch (log){
            case 1:
                answer += "w";
                break;
            case -1:
                answer += "s";
                break;
            case 10:
                answer += "d";
                break;
            case -10:
                answer += "a";
                break;
        }
        before = curr;
    }
    return answer;
}