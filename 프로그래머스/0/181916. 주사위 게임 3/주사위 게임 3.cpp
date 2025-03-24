#include <string>
#include <vector>
using namespace std;

int not_zero_counts(vector<int>& counts) {
    int count = 0;
    for (int num : counts) {
        if (num != 0) {
            count++;
        }
    }
    return count;
}

int solution(int a, int b, int c, int d) {
    int answer = 0;
    vector<int> counts(6, 0);  // 0부터 5까지의 인덱스 사용
    counts[a - 1]++;
    counts[b - 1]++;
    counts[c - 1]++;
    counts[d - 1]++;

    int count = not_zero_counts(counts);

    if (count == 4) {
        for (int i = 0; i < 6; i++) {
            if (counts[i] != 0) {
                answer = i + 1;
                break;
            }
        }
    }
    else if (count == 1) {
        answer = 1111 * a;
    }
    else if (count == 3) {
        vector<int> q;
        for (int i = 0; i < 6; i++) {
            if (counts[i] == 1) {
                q.push_back(i + 1);
            }
        }
        answer = q[0] * q[1];
    }
    else if (count == 2) {
        int q[2];
        int index = 0;
        int v = 1;
        for (int i = 0; i < 6; i++) {
            if (counts[i] == 2) {
                q[index++] = i + 1;
                v = 1;
            }
            else if (counts[i] == 1) {
                q[1] = i + 1;
                v = 2;
            }
            else if (counts[i] == 3) {
                q[0] = i + 1;
                v = 2;
            }
        }

        if (v == 2) {
            answer = (10 * q[0] + q[1]) * (10 * q[0] + q[1]);
        }
        else {
            answer = (q[0] + q[1]) * (q[1] - q[0]);
        }
    }

    return answer;
}