#include <string>
#include <vector>

using namespace std;

void dfs(int idx, vector<vector<int>>& computers, vector<bool>& visited, int n){
    visited[idx] = true;
    for(int j = 0; j<n ; j++){
        if(computers[idx][j] == 1 && visited[j]==false){
            dfs(j,computers,visited,n);
        }
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    
    vector<bool> visited(n,false);
    
    for(int i = 0; i < n; i++){
        if(!visited[i]){
            dfs(i,computers,visited,n);
            answer++;
        }
    }
    
    return answer;
}