#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;
    int A = a;
    for(int i =0; i<included.size(); i++){
        if(i!=0) A += d;
        if(included[i]){
            answer += A;
        }
    }
    return answer;
}