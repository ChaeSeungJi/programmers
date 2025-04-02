#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    int n = myString.size() - pat.size();
    int count = 0;
    for(int i = 0; i<=myString.size(); i++){
        string s = myString.substr(i, pat.size());
        if(s == pat)
            count++;
    }
    answer = count;
    return answer;
}