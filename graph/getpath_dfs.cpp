#include <iostream>
#include <vector>
using namespace std;


bool traverse(int **arr,int v,int start,int end,bool*visited,vector<int> &path)
{
   visited[start]=true;
  if(start==end)
  {
  path.push_back(end);
    return true;
  }
  
/*  if(arr[start][end]==1) 
  {
   path.push_back(end);
   path.push_back(start);
   return true;
  }
  
  */
  for(int i=0;i<v;i++)
  {
    if((arr[start][i]==1)&&(visited[i]!=true))
    {
      //visited[i]=true;
      bool cat=traverse(arr,v,i,end,visited,path);
      if(cat==true)
      {
        path.push_back(start);
        return true;
      } 
    }
  }
  return false;
  
}


int main()
{
  int v, e,start,end;
  cin >> v >> e;


 int **arr=new int*[v];
    
    for(int i=0;i<v;i++){
      arr[i]=new int[v];
      
      for(int j=0;j<v;j++){
        arr[i][j]=0;
      }
    }
  int p,qi;
  for(int i=0;i<e;i++){
    cin>> p>>qi;
    arr[p][qi]=1;
    arr[qi][p]=1;
    
  }
  for(int i=0;i<v;i++){
    arr[i][i]=1;
  }
  
  cin>>start>>end;
  
  bool *pushed=new bool[v];
  for(int i=0;i<v;i++){
    pushed[i]=false;
  }
  
 vector<int> vec;
////functi
 bool w= traverse(arr,v,start,end,pushed,vec);
 // pushed[0]==true;
 // bool w=haspath(arr,start,end,v,pushed);
// if(w)
 //{cout<<"true";}
  //else
  //{cout<<"false";}
 // cout<<"rgt"<<vec.size();
  
  for(int i=0;i<vec.size();i++){
    cout<<vec[i]<<" ";
  }
  
  
  for(int i=0;i<v;i++){
    delete[] arr[i];
  }
  delete[]arr;
  
  delete[] pushed;
  return 0;
  
  
  
  return 0;
}
