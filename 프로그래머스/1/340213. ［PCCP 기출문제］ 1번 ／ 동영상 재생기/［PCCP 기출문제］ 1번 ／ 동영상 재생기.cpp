#include <string>
#include <vector>
#include <sstream>
#include <iomanip>

using namespace std;

vector<string> split(string time){
    stringstream ss(time);
    string token;
    vector<string> tokens;
    while (getline(ss, token, ':')) {
        tokens.push_back(token);
    }
    return tokens;
}

bool isOp(int time, int op_start, int op_end){
    if(time >= op_start && time <= op_end)
        return true;
    
    return false;
}

int toInt(string sTime){
    vector<string> tokens = split(sTime);
    int mm = stoi(tokens[0]) * 100;
    int ss = stoi(tokens[1]);
    int time = mm + ss;
    return time;
}

int next(int time, int op_start, int op_end){
    int mm = time / 100;
    int ss = time % 100;

    ss += 10;
    if(ss >= 60){
        mm++;
        ss -= 60;
    }

    time = mm * 100 + ss;

    if(isOp(time, op_start, op_end)) 
        time = op_end; // 오프닝 구간 진입 시에만 건너뛰기

    return time;
}

int prev(int time, int op_start, int op_end){
    int mm = time / 100;
    int ss = time % 100;

    ss -= 10;
    if(ss < 0){
        mm--;
        ss += 60; // 수정됨!
    }

    time = mm * 100 + ss;

    if(isOp(time, op_start, op_end))
        time = op_end; // 동일하게 처리

    return time;
}




string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    string answer = "";
    
    int time = toInt(pos);
    int ops = toInt(op_start);
    int ope = toInt(op_end);
    int len = toInt(video_len);
    for(string c : commands){
        
        if(isOp(time, ops, ope)) time = ope;
        
        if(c == "next"){
            time = next(time, ops, ope);
        }
        else if(c == "prev"){
            time = prev(time, ops, ope);
        }
        
        if(time > len) time = len;
        else if(time < 0) time = 0;
    }
    
    int mm = time / 100;
    int ss = time % 100;
    
    ostringstream oss;
    oss << setw(2) << setfill('0') << mm << ":" << setw(2) << setfill('0') << ss;
    answer = oss.str();
    
    return answer;
}