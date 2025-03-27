#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    for(int i = 0; i<= 57; i++){
        answer.push_back(0);
    }
    for(int i =0; i<my_string.size(); i++){
        int index = my_string[i] - 65;
        answer[index]++;
    }
    for(int i = 91 -65; i<=96-65; i++){
        answer.erase(answer.begin() + 91 -65);
    }
    return answer;
}