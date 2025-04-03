#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    istringstream ss (myString);
    string temp;
    while(getline(ss, temp, 'x')){
        answer.push_back(temp.size());
    }
    if(myString[myString.size()-1] == 'x')
        answer.push_back(0);
    return answer;
}