#include<bits/stdc++.h>
using namespace std;
static int size = 6;


void BFSUtil(vector<int> graph[],vector<bool> &visited, queue<int> &que){

    while(!que.empty()){
        int x = que.front();
        que.pop();
            cout << x << " ";
        visited[x]=true;
        for(int i=0; i<graph[x].size(); i++){
            if(visited[i]==false)
                que.push(graph[x][i]);
        }
        BFSUtil(graph,visited,que);
    }
}

void BFS(vector<int> graph[]){
    vector<bool> visited(size+1, false);
    queue<int> que;
    visited[0]=true;
    for(int x=1; x<=size; x++){
        if(visited[x]==false){
            que.push(x);
            BFSUtil(graph,visited,que);
        }
           
    }

}

int main(){
    
    vector<int> graph[size+1];
    graph[1].push_back(2);
    graph[1].push_back(3);
    graph[2].push_back(4);
    graph[4].push_back(3);
    graph[3].push_back(5);
    graph[5].push_back(6);
    BFS(graph);
}