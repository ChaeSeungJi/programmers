#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    vector<bool> b (my_string.size(), false);
    for(int i = 0; i<my_string.size(); i++){
        char c = my_string[i];
        if(c == ' ')
            b[i] = true;
    }
    
    int count = 0;
    int start = 0;
    int i = 0;
    for(i; i<my_string.size(); i++){
        if(!b[i]){
            count++;
        }
        else{
            if(count != 0)
                answer.push_back(my_string.substr(start,count));
            count = 0;
            start = i+1;
        }
    }
    if(count != 0){
        answer.push_back(my_string.substr(start,count));    
    }
    
    return answer;
}