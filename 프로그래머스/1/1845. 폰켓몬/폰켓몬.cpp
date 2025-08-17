#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    unordered_map<int, int> pok;
    for(int p : nums) pok[p]++;
    int len = nums.size() / 2;
    
    if(len >= pok.size()) answer = pok.size();
    else if(len < pok.size()) answer = len;
    
    return answer;
}