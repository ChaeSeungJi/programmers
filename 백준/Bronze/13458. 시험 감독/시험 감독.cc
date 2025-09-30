#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main() {
    
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }

    int b, c;
    cin >> b >> c;

    long long sum = 0;

    for (int total : a) {
        total = total - b;
        int count = 1;
        if (total > 0) {
            if (total % c > 0) count++;
            count = count + (total / c);
        }
        sum += count;
    }
    cout << sum;
}


