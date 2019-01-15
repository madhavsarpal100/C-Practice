#include <iostream>
#include <queue>
using namespace std;

bool traverse(int **arr,int v,int sv,int ev,bool* pushed,queue<int> q)
{
  
  q.push(sv);pushed[sv]=true;
  //cout<<"in("<<sv<<")";
  
  while(!q.empty())
  {
    int a=q.front();
    q.pop();
    //cout<<a<<" ";
   // cout<<"out("<<a<<")";
    if(arr[a][ev]==1){return true;}
    
    for(int i=0;i<v;i++)
    {
      
      
      if(arr[a][i]==1)  //shouldnt check whether a has an edge with a but stil works cuz pushed rray is marked
      {
        if(!pushed[i])
        { // cout<<"pushing("<<i<<")";
          bool cat=traverse(arr,v,i, ev, pushed, q);
            if(cat==true)return true;
        }
      }
      
    }
    
    
  }
  
  return false;
}

bool haspath(int **arr,int start,int end,int v,bool *pushed)
{
  bool has=false;
  
  if(arr[start][end]==1){
    cout<<start<<"is adj to"<<end;
    return true;}
  pushed[start]=true;
  
  cout<<end<<"not found in "<<start<<"'s adjacency"<<endl;
  
  for(int i=0;i<v;i++){
    if((arr[start][i]==1)&&(pushed[i]!=true)){
      
      cout<<"neibour of "<<start<<" i.e "<<i<<"unvisited"<<endl;
      
      //pushed[i]=true;
        cout<<"now sending probe-from neigbour"<<i<<"to end"<<end<<endl;
      bool ans=haspath(arr,i,end,v,pushed);
        
      if(ans==true){
        cout<<"positive reply from"<<i<<"to"<<end<<endl;
        return true;}
     
      
    }
  }
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
  int p,qi;
  for(int i=0;i<e;i++){
    cin>> p>>qi;
    arr[p][qi]=1;
    arr[qi][p]=1;
    
  }
  cin>>start>>end;
  
  bool *pushed=new bool[v];
  for(int i=0;i<v;i++){
    pushed[i]=false;
  }
  
  queue<int> q;
////functi
 bool w= traverse(arr,v,0,end,pushed,q);
 // pushed[0]==true;
 // bool w=haspath(arr,start,end,v,pushed);
 if(w)
 {cout<<"true";}
  else
  {cout<<"false";}
  
  
  for(int i=0;i<v;i++){
    delete[] arr[i];
  }
  delete[]arr;
  
  delete[] pushed;
  return 0;
}

