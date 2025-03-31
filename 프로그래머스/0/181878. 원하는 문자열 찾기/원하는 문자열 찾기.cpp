#include <string>
#include <vector>
using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    for(char& a : myString){
        if(a>=65 || a<=90)
            a = tolower(a);
    }
    for(char& a : pat){
        if(a>=65 || a<=90)
            a = tolower(a);
    }
    for(int i = 0; i<=myString.size()-pat.size();i++){
        if(i + pat.size() > myString.size())
            break;
        string a = myString.substr(i,pat.size());
        if(a.compare(pat) == 0){
            answer = 1;
        }
    }
    return answer;
}