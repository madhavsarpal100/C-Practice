#include <bits/stdc++.h>
using namespace std;


int maxktor(int *y,int *z,int *arr,int len){
  int r[len];
  int k[len];
  int score[len];
  for(int i=0;i<len;i++){r[i]=k[i]=score[i]=0;}
  
  if(arr[0]==1){score[0]=1;k[0]=1;}
  if(arr[0]==-1){score[0]=-1;r[0]=1;}
  
 /* for(int i=1;i<len;i++){
    
   
    if(score[i-1]+arr[i]>0)
    {
      if(arr[i]==1){r[i]=r[i-1];k[i]=k[i-1]+1;score[i]=score[i-1]+1;}
     else if(arr[i]==-1){r[i]=r[i-1]+1;k[i]=k[i-1];score[i]=score[i-1]-1;}
    }
    if(score[i-1]+arr[i]<=0)
    {
      r[i]=0;k[i]=0;score[i]=0;
    }
   
    }
    */
  //////////////////////////////88888888888
  for(int i=1;i<len;i++){
    
   if(score[i-1]<=0){/*cout<<"prev_neg";*/
     if(arr[i]==1){score[i]=1;k[i]=1;/*cout<<"now_pos:"*/;}
     if(arr[i]==-1){score[i]=0;/*cout<<"now_neg:";*/}
   }
    if(score[i-1]>=1){/*cout<<"prev_pos";*/
      if(arr[i]==1){score[i]=score[i-1]+1;k[i]=k[i-1]+1;r[i]=r[i-1];/*cout<<"now_pos:";*/}
      if(arr[i]==-1){ if(score[i-1]==1){score[i]=0;/*cout<<"abandon:";*/}
                      if(score[i-1]>1){score[i]=score[i-1]-1;r[i]=r[i-1]+1;k[i]=k[i-1];/*cout<<"now_neg";*/}
                                                                    }
   }
   
    }
   
  
  /////////////////////////////888888888
  int maxval=0;
  int index=0;
  for(int i=0;i<len;i++){
    if(score[i]>maxval){maxval=score[i];index=i;}
  // cout<<score[i]<<":";
  }
  *z=index+1;
  *y=index-(r[index]+k[index]-1)+1;
  ////
 //cout<<endl<<"maxktor returning"<<*y<<"to"<<*z<<"with score"<<maxval<<endl;
  return k[index];
}


void pre(string a,int len){
  int arr[len];
  for(int i=0;i<len;i++){
    if(a[i]=='R'){arr[i]=-1;}
    else if(a[i]=='K'){arr[i]=1;}
  }
  int *i=new int;
  int *j=new int; 
  int ans= maxktor(i,j,arr,len);
  ////
  int score=0;
  score=ans;
  for(int p=0;p<((*i)-1);p++){
    if(a[p]=='R'){score+=1;}
  }
  for(int p=*j;p<len;p++){
    if(a[p]=='R'){score+=1;}
  }
  cout<<score<<endl;
  delete i;delete j;
}


int main()
{
  int n;
  cin>>n;
  string a;
  for(int i=0;i<n;i++){
    cin>>a;
    pre(a,a.length());
  }
    return 0;
  
}
