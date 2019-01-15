#include <iostream>
#include <queue>
#include <map>
#include <algorithm>
using namespace std;

void traverse(int **arr,int v,int sv,bool* pushed,vector <int> &vec)
{ 
  queue<int> q;
  q.push(sv);pushed[sv]=true;
 
  while(!q.empty())
  {
    int a=q.front();
    q.pop();
  
    vec.push_back(a);
  

    for(int i=0;i<v;i++)
    {
      if(arr[a][i]==1)  //shouldnt check whether a has an edge with a but stil works cuz pushed rray is marked
      {
        if(!pushed[i])
        {
          q.push(i);
          pushed[i]=true;
        }
      }

    }
 }


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

 for(int i=0;i<v;i++)
 {
   if(pushed[i]==false)
   {
     
     vector<int> vec;
  traverse(arr,v,i,pushed,vec);
     sort(vec.begin(),vec.end());
     for(int i=0;i<vec.size();i++){
       cout<<vec[i]<<" ";
     }
     
     cout<<endl;
     
   }
   
  }

  for(int i=0;i<v;i++){
    delete[] arr[i];
  }
  delete[]arr;

  delete[] pushed;
  return 0;
}
