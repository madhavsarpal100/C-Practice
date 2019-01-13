#include <bits/stdc++.h>
using namespace std;

int kadane(int *arr,int size){
  int curmax=0;
  int best=INT_MIN;
  
  int flag=0;
  for(int i=0;i<size;i++){
    if(arr[i]>0){flag=1;}
  }
  if(flag==0){
    for(int i=0;i<size;i++){
      if(arr[i]>best){best=arr[i];}
    }
    return best;
    
    
  }
  
  for(int i=0;i<size;i++){
    
    curmax=curmax+arr[i];
    if(curmax<0){curmax=0;}
    
    if(curmax>best){best=curmax;}
  }

return best;

}


int main()
{
   int r;int c;
  cin>>r;
  cin>>c;
  int arr[r][c];
  
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cin>>arr[i][j];
    }
  }
  
  int max=INT_MIN;
  int lin[r];
  //888888888888888888888888888888888888888
  for(int i=0;i<c;i++){
    
    for(int p=0;p<r;p++){
      lin[p]=arr[p][i];
      
    }
    int ans=kadane(lin,r);
    max=(max>ans?max:ans);
    
    
    for(int j=i+1;j<c;j++){
      for(int p=0;p<r;p++){
      lin[p]+=arr[p][j];
      
    }
      int ans=kadane(lin,r);
    max=(max>ans?max:ans);
      
      
    }
  }
  cout<<max;
  //88888888888888888888888888888888888888888888
  return 0;
}
