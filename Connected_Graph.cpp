//Author : Aryan Tiwari 
//Date:8 feb 2023
#include<bits/stdc++.h>
using namespace std;
//Connected Graph:
/* 1---2   5---6
   3---4  
*/
void Traverse()
{
    
}
int main() {
    // for the Traversal of the Connected graph.
    int n;
    int visited[n + 1];
    for(int i = 1;i < n;i++)
    {
        if(!visited[i])
        {
            Traverse(); //Traverse and Mark the visited array at particular index true.
        }
    }
}