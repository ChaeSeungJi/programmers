#include <string>
#include <vector>
#include <deque>

using namespace std;

void insert(deque<int>& dq, int value){
    
    if(dq.empty()){
        dq.push_back(value);
        return;
    }
    
    if(value <= dq.front()){
        dq.push_front(value);
    }
    else if(value >= dq.back()){
        dq.push_back(value);
    }
    else{
        int index = 0;
        for(int i = 0; i<dq.size(); i++){
            int curr = dq[i];
            if(value <= curr){
                index = i;
            }
        }
        dq.insert(dq.begin() + index, value);
    }
}

vector<int> solution(vector<string> operations) {
    vector<int> answer;
    deque<int> dq;
    for(string op : operations){
        if(op[0] == 'I'){
            string num_str = op.substr(2);
            int value = stoi(num_str);
            insert(dq,value);
        }
        else{
            if(dq.empty()) continue;
            if(op[2]=='-'){
                dq.pop_front();
            }
            else{
                dq.pop_back();
            }
        }
    }
    if(dq.empty()) return {0,0};
    
    answer.push_back(dq.back());
    answer.push_back(dq.front());
    return answer;
}