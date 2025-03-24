#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string answer = "";
    for(vector<int> q: queries){
        int s = q[0];
        int e = q[1];
        int k = (e - s) / 2;
        if(k == 0){
            char temp = my_string[s];
            my_string[s] = my_string[e];
            my_string[e] = temp;
        }
        else{
            while(k != -1){
                char temp = my_string[s];
                my_string[s] = my_string[e];
                my_string[e] = temp;
                s++;
                e--;
                k--;
            }
        }
        
    }
    answer = my_string;
    return answer;
}