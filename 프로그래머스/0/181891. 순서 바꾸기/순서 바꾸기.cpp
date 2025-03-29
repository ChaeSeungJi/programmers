#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    vector<int> n1 = vector<int> (num_list.begin(), num_list.begin() + n);
    vector<int> n2 = vector<int> (num_list.begin() + n, num_list.end());
    n2.insert(n2.end(), n1.begin(), n1.end());
    answer = n2;
    return answer;
}