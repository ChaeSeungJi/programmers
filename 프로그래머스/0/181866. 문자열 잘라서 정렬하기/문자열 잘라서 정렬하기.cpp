#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    istringstream ss (myString);
    string temp;
    while(getline(ss, temp, 'x')){
        if(temp.size() != 0)
            answer.push_back(temp);
    }
    sort(answer.begin(), answer.end());
    return answer;
}