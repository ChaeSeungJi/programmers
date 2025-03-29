#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;
    vector<string>::iterator left;
    vector<string>::iterator right;
    left = find(str_list.begin(), str_list.end(), "l");
    right = find(str_list.begin(), str_list.end(), "r");
    if(left < right)
        answer = vector<string> (str_list.begin(), left);
    else{
        if (right == str_list.end())
            return answer;
        answer = vector<string> (right+1, str_list.end());
    }
        
    return answer;
}