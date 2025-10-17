#include <string>
#include <vector>

using namespace std;

bool sumx(vector<int> common){
    int diff = common[1] - common[0];
    int sum = common[0];
    for(int i = 1; i<common.size(); i++){
        sum += diff;
    }
    if(sum == common[common.size()-1]) return true;
    
    return false;
}

bool multiplex(vector<int> common){
    int diff = common[1] / common[0];
    int multiple = common[0];
    for(int i = 1; i<common.size(); i++){
        multiple *= diff;
    }
    if(multiple == common[common.size()-1]) return true;
    
    return false;
}


int solution(vector<int> common) {
    int answer = 0;
    int last = common[common.size()-1];
    
    if(sumx(common)) {
        int diff = common[1] - common[0];
        return last + diff;
    }
    

    int diff = common[1] / common[0];
    return last * diff;

    
    
}