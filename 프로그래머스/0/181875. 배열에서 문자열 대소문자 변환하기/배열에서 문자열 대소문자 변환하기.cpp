#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    for(int i = 0; i<strArr.size(); i++){
        if(i%2 == 0){
            string s = strArr[i];
            for(char& a : s){
                if(a >= 65 && a<=90)
                    a+=32;
            }
            answer.push_back(s);
        }
        else{
            string s = strArr[i];
            for(char& a : s){
                if( a>= 97 && a<=122){
                    a -= 32;
                }
            }
            answer.push_back(s);
        }
        
    }
    
    return answer;
}