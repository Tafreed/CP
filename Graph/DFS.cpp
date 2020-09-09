#include<bits/stdc++.h>
using namespace std;
static int size = 6;


void DFSUtil(int x,vector<int> graph[],vector<bool> &visited){
    visited[x]=true;
    cout << x << " ";
    for(int i=0; i<graph[x].size(); i++){
        if(visited[graph[x][i]]==false)
            DFSUtil(graph[x][i],graph,visited);
    }   
}

void DFS(vector<int> graph[]){
    vector<bool> visited(size+1, false);
    visited[0]=true;
    for(int x=1; x<=size; x++){
        if(visited[x]==false)
            DFSUtil(x,graph,visited);
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
    DFS(graph);
}