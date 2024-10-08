//BFS Graph Traversal Technique
//T.C=>O(E+K)
#include<bits/stdc++.h>
using namespace std;
void BFS(int u, unordered_map<int,vector<int>>&adj,vector<bool>&visited,vector<int>&ans){
    queue<int>q;
    visited[u]=true;
    q.push(u);
    ans.push_back(u);
    while(!q.empty()){
        int val=q.front();
        q.pop();
        for(auto &v:adj[val]){
            if(!visited[v]){
                q.push(v);
                visited[v]=true;
                ans.push_back(v);

            }
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
                BFS(u,adj,visited,ans);
            }
        }


    }


