#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";
    vector<bool> index;
    for(int i =0;i<my_string.size(); i++){
        index.push_back(true);
    }
    for(int i : indices){
        index[i] = false;
    }
    for(int i=0; i<my_string.size();i++){
        if(index[i]){
            answer += my_string[i];
        }
    }
    return answer;
}