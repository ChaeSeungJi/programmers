#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    for(string str : intStrs){
        int v = stoi(str.substr(s,l));
        if(v>k){
            answer.push_back(v);
        }
    }
    return answer;
}