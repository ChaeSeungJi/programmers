#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    string a1 ="";
    string a2 ="";
    for(int i = 0; i<num_list.size(); i++){
        if(num_list[i]%2==0){
            a1 += to_string(num_list[i]);
        }
        else{
            a2 += to_string(num_list[i]);
        }
    }
    answer = stoi(a1) + stoi(a2);
    return answer;
}