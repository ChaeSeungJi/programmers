#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string alp) {
    string answer = "";
    char v = alp[0];
    for(char& a : my_string){
        if( a == v){
            a -= 32;
        }
    }
    answer = my_string;
    return answer;
}