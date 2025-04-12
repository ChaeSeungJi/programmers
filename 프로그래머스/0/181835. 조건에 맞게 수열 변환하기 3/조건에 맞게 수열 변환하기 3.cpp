#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    if(k %2 == 0)
        for(int &a : arr){
            a += k;
        }
    else
        for(int &a : arr){
            a *= k;
        }
    return arr;
}