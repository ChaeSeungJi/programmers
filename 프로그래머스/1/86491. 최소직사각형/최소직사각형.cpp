#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int &a, int &b){
    return a>b;
}

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    for(vector<int> &s : sizes){
        sort(s.begin(), s.end(), compare);
    }
    
    int mw = 0;
    int mh = 0;
    for(vector<int> s : sizes){
        mw = s[0] > mw ? s[0] : mw;
        mh = s[1] > mh ? s[1] : mh;
    }
    answer = mw * mh;
    return answer;
}