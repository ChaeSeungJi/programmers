#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    for(char &a : myString){
        if( a>= 97 && a<= 122)
            a -= 32;
    }
    answer = myString;
    return answer;
}