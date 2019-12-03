#include<iostream>
#include<vector>
#include<conio.h>
#define ipair pair<int,int>
using namespace std;
void add(vector<ipair>adj[],int u,int v,int wt)
{
     adj[u].push_back(make_pair(v,wt));
}
void shortest(vector<ipair>adj)
{
     vector<int>dist(5,20000);
     dist[1]=0;
     for (int i=0;i<3;i++)
     {
         for (int j=1;j<=4;j++)
         {
             for (auto x:adj[j])
             {
                 int v=x.first;
                 int w=x.second;
                 if (dist[v]>dist[j]+w)
                 dist[v]=dist[j]+w;
             }
         }
     }
     for (int i=1;i<=4;i++)
     {
         cout<<i<<" "<<dist[i]<<endl;
     }     
}            
     
int main()
{
   vector<ipair>adj[5];
   add(adj,1,2,4);
   add(adj,1,4,5);
   add(adj,3,2,-10);
   add(adj,4,3,3);
   
}
