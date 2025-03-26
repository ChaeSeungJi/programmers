#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c) {
    string answer = "";
    
    int start = 0;
    for(start; start<my_string.size(); start += m){
        string str = my_string.substr(start,start + m);
        answer += str[c-1];
    }
    return answer;
}