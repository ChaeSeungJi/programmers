#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    string answer = "";
    int count = 0;
    for(char c : n_str){
        if( c == '0')
            count++;
        else
            break;
    }
    if(count >0)
        answer = n_str.substr(count);
    else
        answer = n_str;
    return answer;
}