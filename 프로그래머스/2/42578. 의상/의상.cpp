#include <string>
#include <vector>
#include <unordered_map>
#include <cmath>
using namespace std;

#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<vector<string>> clothes) {
    unordered_map<string, int> cnt;      
    for (const auto& c : clothes) {
        cnt[c[1]]++;
    }

    long long answer = 1;
    for (const auto& [type, k] : cnt) {
        answer *= (k + 1);
    }
    return (int)(answer - 1);
}


// int multiply(vector<int> values){
//     if(values.empty())
//         return 1;
//     else{
//         int last = values.back();
//         values.pop_back();
//         return last * (multiply(values));
//     }
// }

// int solution(vector<vector<string>> clothes) {
//     int answer = 0;
//     unordered_map<string, vector<string>> category;
//     for(vector<string> c : clothes){
//         category[c[1]].push_back(c[0]);
//     }
    
//     vector<vector<string>> my_arr;
//     for(const auto& [cat, arr] : category){
//         my_arr.push_back(arr);
//     }
    
//     int n = my_arr.size();
//     int total = 1 << n;
    
//     for(int i = 1; i<total;i++){
//         vector<int> cnt;
//         for(int j =0; j<n; j++){
//             if(i & (1<<j)){
//                 cnt.push_back(my_arr[j].size());
//             }
//         }
//         answer += multiply(cnt);
//     }
    
//     return answer;
// }