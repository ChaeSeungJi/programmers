#include <string>
#include <vector>
#include <ctime>
using namespace std;

int solution(vector<int> date1, vector<int> date2) {
    int answer = 0;
    struct tm datetime1;
    struct tm datetime2;
    time_t timestamp1, timestamp2;
    
    datetime1.tm_year = date1[0] - 1900; 
    datetime1.tm_mon = date1[1] - 1; 
    datetime1.tm_mday = date1[2];
    datetime1.tm_hour = 0;
    datetime1.tm_min = 0;
    datetime1.tm_sec = 0;

    datetime1.tm_isdst = -1;
    
    datetime2.tm_year = date2[0] - 1900; 
    datetime2.tm_mon = date2[1] - 1; 
    datetime2.tm_mday = date2[2];
    datetime2.tm_hour = 0;
    datetime2.tm_min = 0;
    datetime2.tm_sec = 0;

    datetime2.tm_isdst = -1;
    
    timestamp1 = mktime(&datetime1);
    timestamp2 = mktime(&datetime2);
    
    double diff = difftime(timestamp1, timestamp2);

    answer = diff < 0 ? 1 : 0;
    return answer;
}