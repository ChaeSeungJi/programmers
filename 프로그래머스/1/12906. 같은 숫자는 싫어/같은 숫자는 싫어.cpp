#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int i = -1;
    
    for(int a : arr){
        if(i==-1)  {
            answer.push_back(a);
            i++;
        }
        else{
            if(answer[i] != a) {
                answer.push_back(a);
                i++;
            }
        }
    }
    
    return answer;
}