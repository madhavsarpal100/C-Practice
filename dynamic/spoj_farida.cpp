/*spoj problem farida
multiple test cases input
*/
#include <bits/stdc++.h>
using namespace std;


long long int dynamic(long long int *ar,int len){
  long long int *ans=new long long int[len];
  
  if(len==1){return ar[0];}
  if(len==2){return (ar[0]>ar[1]?ar[0]:ar[1]);}
  
  ans[0]=ar[0];
  ans[1]=(ar[0]>ar[1]?ar[0]:ar[1]);
  
  if(len>=3){
  //ans[2]=(ar[0]+ar[2]>ar[1]?ar[0]+ar[2]:ar[1]);
  for(int i=2;i<len;i++){
    ans[i]=(ans[i-1]>ans[i-2]+ar[i]?ans[i-1]:ans[i-2]+ar[i]);
    }
  }
  
 long long int q=ans[len-1];
  delete[] ans;
  return q;
  
}


void farida(long long int **arr,int n){
  for(int i=0;i<n;i++){
   long long int ans=dynamic(arr[i]+1,arr[i][0]);
    cout<<"Case "<<i+1<<": "<<ans<<endl;
  }
}


int main()
{
  int n;
 // cout<<"enter no of cases :"<<endl;
  cin>>n;
  long long int **arr=new long long int*[n];
  int length=0;
  
  for(int i=0;i<n;i++){
   // cout<<"enter length for case "<<i+1<<":"<<endl;
    cin>>length;
    arr[i]=new long long int[length+1];
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
  
  for(int i=0;i<n;i++){
    delete[] arr[i];
  }
  delete[] arr;

    return 0;
}
