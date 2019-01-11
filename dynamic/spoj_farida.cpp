#include <bits/stdc++.h>
using namespace std;


int dynamic(int *ar,int len){
  int *ans=new int[len];
  
  if(len==1){return ar[0];}
  if(len==2){return (ar[0]>ar[1]?ar[0]:ar[1]);}
  
  if(len>=3){
  ans[2]=(ar[0]+ar[2]>ar[1]?ar[0]+ar[2]:ar[1]);
  for(int i=3;i<len;i++){
    ans[i]=(ans[i-1]>ans[i-2]+ar[i]?ans[i-1]:ans[i-2]+ar[i]);
    }
  }
  
  int q=ans[len-1];
  delete[] ans;
  return q;
  
}



void farida(int **arr,int n){
  for(int i=0;i<n;i++){
    int ans=dynamic(arr[i]+1,arr[i][0]);
    cout<<"Case "<<i+1<<": "<<ans<<endl;
  }
}

int main()
{
  int n;
 // cout<<"enter no of cases :"<<endl;
  cin>>n;
  int **arr=new int*[n];
  int length=0;
  for(int i=0;i<n;i++){
   // cout<<"enter length for case "<<i+1<<":"<<endl;
    cin>>length;
    arr[i]=new int[length+1];
    arr[i][0]=length;
    for(int j=1;j<=length;j++){
       // cout<<"enter..case "<<i+1<<",ele"<<j<<":"<<endl;
      cin>>arr[i][j];
    }
  }
 /* cout<<"now showing"<<endl;
  /////////
  for(int i=0;i<n;i++){
    int a=arr[i][0];
    for(int j=1;j<=a;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  */
  farida(arr,n);

    return 0;
}
