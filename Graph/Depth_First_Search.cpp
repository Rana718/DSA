#include <iostream>
#include <vector>

using namespace std;

vector<int> visited(7,0);
vector<vector<int>> a = {
    {0, 1, 1, 1, 0, 0, 0},
    {1, 0, 1, 0, 0, 0, 0},
    {1, 1, 0, 1, 1, 0, 0},
    {1, 0, 1, 0, 1, 0, 0},
    {0, 0, 1, 1, 0, 1, 1},
    {0, 0, 0, 0, 1, 0, 0}, 
    {0, 0, 0, 0, 1, 0, 0}
};

int DFS(int i){
    cout<<i<<" ";
    visited[i] = 1;
    for(int j=0; j<a.size(); j++){
        if(a[i][j] == 1 && !visited[j]){
            DFS(j);
        }
    }
}

int main(){
    DFS(1);

}