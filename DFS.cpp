//Author : Aryan Tiwari 
//Date:11 feb 2023
#include<bits/stdc++.h>
using namespace std;
int main() {
    
}
void dfs(int node,int vis[],vector<int> &ans,int adj[])
{
    vis[node] = 1;
    ans.push_back(node);
    for(auto it: adj[node])
    {
        if(!vis[it])
        {
            dfs(it,vis,ans,adj);
        }
    }
}
class DFS
{
    public:
    //May contain calling function.
};