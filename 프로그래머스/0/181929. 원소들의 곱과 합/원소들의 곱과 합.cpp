#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int a1=1, a2=0;
    for(int i =0; i<num_list.size(); i++){
        a1 *= num_list[i];
        a2 += num_list[i];
    }
    answer = a1<(a2*a2)? 1 : 0;
    return answer;
}