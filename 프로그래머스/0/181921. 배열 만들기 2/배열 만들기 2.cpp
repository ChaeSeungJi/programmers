#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    for(int i = l; i<=r; i++){
        if(i%5==0){
            string s = to_string(i);
            bool check = true;
            for(char c : s){
                if(c=='5' || c=='0'){
                    continue;
                }    
                else{
                    check = false;
                    break;
                }
            }
            if(check)
                answer.push_back(i);
        }
        
    }
    if(answer.size()==0)
        answer.push_back(-1);
    return answer;
}