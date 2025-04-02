#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    int start = 0;
    int i = 0;
    for(i; i<my_string.size(); i++ ){
        if(my_string[i] == ' '){
            answer.push_back(my_string.substr(start, i - start));
            start = i + 1;
        }
    }
    answer.push_back(my_string.substr(start, i - start));
    return answer;
}