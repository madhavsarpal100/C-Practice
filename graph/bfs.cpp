#include <iostream>
#include <queue>
using namespace std;

void traverse(int **arr,int v,int sv,bool* pushed)
{
  queue<int> q;
  q.push(sv);pushed[sv]=true;
  //cout<<"in("<<sv<<")";
  while(!q.empty())
  {
    int a=q.front();
    q.pop();
    cout<<a<<" ";
   // cout<<"out("<<a<<")";
    
    for(int i=0;i<v;i++)
    {
      if(arr[a][i]==1)
      {
        if(!pushed[i])
        { // cout<<"pushing("<<i<<")";
          q.push(i);
          pushed[i]=true;
        }
      }
      
    }
    
    
  }
  
}
int main() {
    int v, e;
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
  bool *pushed=new bool[v];
  for(int i=0;i<v;i++){
    pushed[i]=false;
  }
  
////functi
  traverse(arr,v,0,pushed);
  
  for(int i=0;i<v;i++){
    delete[] arr[i];
  }
  delete[]arr;
  
  delete[] pushed;
  return 0;
}
