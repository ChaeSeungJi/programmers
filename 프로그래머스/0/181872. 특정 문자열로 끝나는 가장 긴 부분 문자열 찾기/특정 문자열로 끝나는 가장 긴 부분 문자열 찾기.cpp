#include <string>
#include <vector>

using namespace std;

string solution(string myString, string pat) {
    string answer = "";
    int index;
    int n = myString.size();
    for(int i = 0 ; i<n ; i++){
        string s = myString.substr(i,pat.size());
        if(s == pat){
            index = i;
        }
    }
    answer = myString.substr(0, index + pat.size());
    return answer;
}