//DFS Graph Traversal Technique
//T.C=>O(E+K)
#include<bits/stdc++.h>
using namespace std;
void DFS(int u, unordered_map<int,vector<int>>&adj,vector<bool>&visited,vector<int>&ans){
    if(visited[u]==true){
        return ;
    }
    visited[u]=true;
    ans.push_back(u);
    for(int &v:adj[u]){
        if(!visited[v]){
            DFS(v,adj,visited,ans);
        }
    }
}
int main(){
    int V=4;
    vector<vector<int>>arr={{0,1},{1,2},{2,0},{0,1}};
    unordered_map<int,vector<int>>adj;
    //populate graph
        for(vector<int>vec:arr){
            int u=vec[0];
            int v=vec[1];
            adj[u].push_back(v);
        }
    vector<int>ans;
    vector<bool>visited(V,false);

        for(int u=0;u<V;u++){
            if(!visited[u]){
                DFS(u,adj,visited,ans);
            }
        }


    }


