//Author : Aryan Tiwari 
//Date:7 feb 2023.

#include<bits/stdc++.h>
using namespace std;
//There are two ways to implement Graph.
    // !.Adjcency Matrix.
    // 2.Adjcency List.

    
// Implementing Adjcency Matrix.
int main() {
    int n,m;// n = node and m = edges.
    cin>>n>>m;
    int adj[n + 1][n + 1];
    for(int i = 0;i < m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    //complexity: Time = O(m) and space = O(n^2);
}

//Implementing Adjcency list.
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> adj(n + 1);
    for(int i = 0;i < m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[v] = u;
        adj[u] = v;
    }
    //complexity: Time = O(m) and space = O(n) or O(2*n);
}