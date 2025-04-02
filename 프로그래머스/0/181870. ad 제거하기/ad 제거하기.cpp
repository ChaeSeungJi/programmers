#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    for(string str : strArr){
        bool cmp = false;
        for(int i = 0; i<str.size(); i++){
            string s = str.substr(i,2);
            if(s.compare("ad") == 0){
                cmp = true;
                break;
            }
                
            
        }
        if(!cmp)
            answer.push_back(str);
    }
    return answer;
}