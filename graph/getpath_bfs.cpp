#include <iostream>
#include <queue>
#include <map>
using namespace std;

bool traverse(int **arr,int v,int sv,int end,bool* pushed, map <int,int> &m)
{
  queue<int> q;
  q.push(sv);pushed[sv]=true;
  m[sv]=-1;
  
  while(!q.empty())
  {
    int a=q.front();
    q.pop();
   
    
    for(int i=0;i<v;i++)
    {
      if(arr[a][i]==1)  //shouldnt check whether a has an edge with a but stil works cuz pushed rray is marked
      {
        if(!pushed[i])
        { 
          q.push(i);
          m[i]=a;
          if(i==end){return true;}
          pushed[i]=true;
        }
      }
      
    }
    
    
  }
  return false;
  
}
int main() {
    int v, e,start,end;
    cin >> v >> e;

  int **arr=new int*[v];
    
    for(int i=0;i<v;i++){
      arr[i]=new int[v];
      
      for(int j=0;j<v;j++){
        arr[i][j]=0;
      }
    }
  int p,q;
  for(int i=0;i<e;i++){
    cin>> p>>q;
    arr[p][q]=1;
    arr[q][p]=1;
    
  }
  
  cin>>start>>end;
  bool *pushed=new bool[v];
  for(int i=0;i<v;i++){
    pushed[i]=false;
  }
  

  map<int,int> m;
  bool ans=traverse(arr,v,start,end,pushed,m);
  if(ans==true){
    int node=end;
    while(node!=-1)
    {
      cout<<node<<" ";
      node=m[node];
      
      
    }
   
  }
  
  for(int i=0;i<v;i++){
    delete[] arr[i];
  }
  delete[]arr;
  
  delete[] pushed;
  return 0;
}
