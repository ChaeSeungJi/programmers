#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    for (char& c : pat) {
        if (c == 'A')
            c = 'B';
        else
            c = 'A';
    }
    int j = myString.find(pat);
    if (j >= 0 && j<myString.size())
        return 1;

    return 0;
}